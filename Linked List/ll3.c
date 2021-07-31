/*Write a program to create linked list of structure nodes. Make separate functions for 
creating the linked list, sorting elements of the list, deleting a specified node from the list.*/
#include<stdio.h>
#include<stdlib.h>
struct list
{
    int no;
    struct list *next;
}*head;

void create (int n);
void deleteNode(int key);
void displayList();
void sorting();
void swap();

int main()
{
    int n,key;
    printf("Enter number of Node: ");
    scanf("%d",&n);
    printf("\n");
    create (n);
    printf("\n-------------------------------\n");
    sorting (head);
    printf("LINKED LIST AFTER SHORTING \n");
    displayList();
    printf("\n--------------------------------\n");
    printf("Enter Node which is delete from the linked list: ");  
    scanf("%d",&key);
    deleteNode(key);
    printf("\n--------------------\n");
    printf("\nLINKED LIST AFTER DELETING THE NODE \n");  displayList();
    return 0;
}

void create (int n)
{
    struct list *newNode,*temp;
    int data,i;
    head=(struct list *) malloc (sizeof (struct list));
    if(head==NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Enter data of the node 1: ");
        scanf("%d",&data);
        head->no=data;
        head->next=NULL;
        temp=head;
        for(i=1; i<n; i++)
        {
            newNode=(struct list *) malloc (sizeof (struct list));
            if(newNode==NULL)
            {
            printf("Unable to allocate memory\n");
        }
        else
        {
            printf("Enter data of the Node %d: ",i+1);
            scanf("%d",&data);
            newNode->no=data;
            newNode->next=NULL;
            temp->next=newNode;
            temp=temp->next;
        }
    }
    printf("\nSINGLY LINKED LIST CREATED SUCCESSFULY\n ");  }
}

void deleteNode(int key)
{
    struct list *ptr, *p;
    while (head != NULL && head->no == key)
    {
        ptr = head;
        head = head->next;
        free(ptr);
        return;
    }
    ptr = NULL;
    p = head;
    while (p != NULL)
    {
        if (p->no == key)
        {
            if (ptr != NULL)
            ptr->next = p->next;
            free(p);
        return;
        }
        ptr = p;
        p = p->next;
    }
}

void sorting(struct list *temp) 
{
    int swapped, i;
    struct list *ptr;
    struct list *p = NULL;
    if (temp == NULL)
        return;
    do
    {
        swapped = 0;
        ptr = temp;
        while (ptr->next != p)
        {
            if (ptr->no > ptr->next->no)  
            {
            swap(ptr, ptr->next);  swapped = 1;
            }
            ptr= ptr->next;
        }
        p = ptr;
    } while (swapped);
}

void swap(struct list *a, struct list *b) 
{
    int temp = a->no;
    a->no = b->no;
    b->no = temp;
}

void displayList()
{
    struct list *temp;
    if(head==NULL)
    {
        printf("List is Empty \n");  
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("Data = %d\n",temp->no);  
            temp=temp->next;
        }
    }
}