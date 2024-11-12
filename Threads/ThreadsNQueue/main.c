/*
 * main.c
 *
 * Multithreaded CAN Communication Program with Message Queuing and Parsing
 * 
 * This program facilitates CAN message transmission and reception using two separate threads.
 * The receive thread listens for incoming CAN messages and enqueues them into a shared queue. 
 * A second thread, the parse thread, retrieves messages from the queue and parses the data for 
 * further processing. This multithreaded approach enables efficient handling of CAN messages 
 * in real time.
 * 
 *  Created on: Nov 12, 2024
 *      Author: Krutarth Purohit
 */
/***************************************************************************************************/
/*                                              INCLUDES                                           */
/***************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <pthread.h>

#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>

#include <linux/can.h>
#include <linux/can/raw.h>
#include <sys/epoll.h>

/***************************************************************************************************/
/*                           GLOBAL VARIABLES, STRUCTURES AND MACROS                               */
/***************************************************************************************************/
#define QUEUE_SIZE 10

int fd0;
struct sockaddr_can addr0;
struct ifreq ifr0;
struct epoll_event can0_event_setup;
int fd0_epoll;
int res_can;

// CAN message structure
typedef struct {
    int id;
    int dlc;
    char data[8];
} CANMessage;

// Queue to store received messages
typedef struct {
    CANMessage messages[QUEUE_SIZE];
    int front, rear, count;
    pthread_mutex_t lock;
    pthread_cond_t not_empty, not_full;
} CANQueue;

CANQueue queue;

/***************************************************************************************************/
/*                                        QUEUE FUNCTIONS                                          */
/***************************************************************************************************/
// Queue initialization
void initQueue(CANQueue *q) {
    q->front = q->rear = q->count = 0;
    pthread_mutex_init(&q->lock, NULL);
    pthread_cond_init(&q->not_empty, NULL);
    pthread_cond_init(&q->not_full, NULL);
}

// Enqueue function
void enqueue(CANQueue *q, CANMessage msg) {
    pthread_mutex_lock(&q->lock);

    while (q->count == QUEUE_SIZE)  // Wait if the queue is full
        pthread_cond_wait(&q->not_full, &q->lock);

    q->messages[q->rear] = msg;
    q->rear = (q->rear + 1) % QUEUE_SIZE;
    q->count++;

    pthread_cond_signal(&q->not_empty);
    pthread_mutex_unlock(&q->lock);
}

// Dequeue function
CANMessage dequeue(CANQueue *q) {
    pthread_mutex_lock(&q->lock);

    while (q->count == 0)  // Wait if the queue is empty
        pthread_cond_wait(&q->not_empty, &q->lock);

    CANMessage msg = q->messages[q->front];
    q->front = (q->front + 1) % QUEUE_SIZE;
    q->count--;

    pthread_cond_signal(&q->not_full);
    pthread_mutex_unlock(&q->lock);

    return msg;
}

/***************************************************************************************************/
/*                                          CAN FUNCTIONS                                          */
/***************************************************************************************************/
// Socket initialization function
int initSocket(char *iface, int *fd, struct ifreq *ifr, struct sockaddr_can *addr, int *fd_epoll, struct epoll_event *eventsetup) {
    if ((*fd = socket(PF_CAN, SOCK_RAW, CAN_RAW)) < 0) {
        perror("Socket");
        return -1;
    }

    (*fd_epoll) = epoll_create(1);
    if ((*fd_epoll) < 0) {
        perror("epoll_create");
        return -1;
    }

    eventsetup->data.fd = *fd;
    eventsetup->events = EPOLLIN;

    if (epoll_ctl(*fd_epoll, EPOLL_CTL_ADD, *fd, eventsetup)) {
        perror("epoll_ctl");
        return -1;
    }

    strcpy(ifr->ifr_name, iface);
    if (ioctl((*fd), SIOCGIFINDEX, ifr) < 0) {
        perror("ioctl SIOCGIFINDEX");
        return -1;
    }

    memset(addr, 0, sizeof(struct sockaddr_can));
    addr->can_family = AF_CAN;
    addr->can_ifindex = ifr->ifr_ifindex;

    if (bind((*fd), (struct sockaddr *)addr, sizeof(struct sockaddr_can)) < 0) {
        perror("Bind");
        return -1;
    }

    return 0;
}

/***************************************************************************************************/
/*                                        Independent Threads                                      */
/***************************************************************************************************/
// Function to transmit CAN messages
void *transmitThread(void *arg) {
    int canId = 0x123;
    int canDlc = 8;
    int count = 0;

    //Transmit CAN message only 6 times at the interval of 2 seconds
    while (count < 6) {
        struct can_frame frame;
        frame.can_id = canId;
        frame.can_dlc = canDlc;
        for (int i = 0; i < canDlc; i++)
            frame.data[i] = i;

        if (write(fd0, &frame, sizeof(struct can_frame)) != sizeof(struct can_frame))
            perror("Write");

        printf("Transmitted: 0x%03X [%d] ", frame.can_id, frame.can_dlc);
        for (int i = 0; i < frame.can_dlc; i++)
            printf("%02X ", frame.data[i]);
        printf("\n");

        usleep(2000000);  // 2 seconds
        count++;
    }
    return NULL;
}

// Function to receive CAN messages
void *receiveThread(void *arg) {
    while (1) {
        struct can_frame frame;
        int nbytes = read(fd0, &frame, sizeof(struct can_frame));

        if (nbytes < 0) {
            perror("Read");
        } else if (nbytes < sizeof(struct can_frame)) {
            fprintf(stderr, "Incomplete CAN frame received.\n");
        } else {
            CANMessage msg;
            msg.id = frame.can_id;
            msg.dlc = frame.can_dlc;
            memcpy(msg.data, frame.data, frame.can_dlc);

            enqueue(&queue, msg);  // Add message to queue
            printf("Received: 0x%03X [%d] ", msg.id, msg.dlc);
            for (int i = 0; i < msg.dlc; i++)
                printf("%02X ", msg.data[i]);
            printf("\n");
        }
    }
    return NULL;
}

// Function to parse and print CAN messages from the queue
void *parseThread(void *arg) {
    while (1) {
        CANMessage msg = dequeue(&queue);  // Retrieve message from the queue

        printf("Parsed message: 0x%03X [%d] ", msg.id, msg.dlc);
        for (int i = 0; i < msg.dlc; i++)
            printf("%02X ", msg.data[i]);
        printf("\n");
    }
    return NULL;
}

/***************************************************************************************************/
/*                                         MAIN FUNCTION                                           */
/***************************************************************************************************/
// Main function
int main(void) {
    res_can = initSocket("can1", &fd0, &ifr0, &addr0, &fd0_epoll, &can0_event_setup);
    if (res_can != 0) {
        perror("Error in creating the socket\n");
        return -1;
    }

    initQueue(&queue);  // Initialize the queue

    pthread_t receiver, transmitter, parser;

    pthread_create(&receiver, NULL, receiveThread, NULL);
    pthread_create(&transmitter, NULL, transmitThread, NULL);
    pthread_create(&parser, NULL, parseThread, NULL);

    pthread_join(receiver, NULL);
    pthread_join(transmitter, NULL);
    pthread_join(parser, NULL);

    close(fd0);  // Close the CAN socket
    return 0;
}
/***************************************************************************************************/
/*                                         END OF FILE                                             */
/***************************************************************************************************/