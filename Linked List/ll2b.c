/*Insertion at a specific position within the list.*/

#include<stdio.h>
#include <stdlib.h>
struct list
{
     int no;
     struct list *next;
}*head;

void create (int n);
void insertNodeAtEnd(int data);
void displayList();

int main()
{
    int n,data;
    printf("Enter number of Node :");
    scanf("%d",&n);
    create (n);
    printf("\n--------------------------------\n");
    printf("Enter data to insert at the end of the list :\n");  scanf("%d",&data);
    insertNodeAtEnd(data);
    displayList();
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
        printf("Enter data of the node 1 :");
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
            printf("Enter data of the Node %d :",i+1);  scanf("%d",&data);
            newNode->no=data;
            newNode->next=NULL;
            temp->next=newNode;
            temp=temp->next;
        }
    }
    printf("\nSINGLY LINKED LIST CREATED SUCCESSFULY\n ");  }
}

void insertNodeAtEnd(int data)
{
    struct list *newNode,*temp;
    newNode=(struct list *) malloc (sizeof (struct list));
    if(newNode==NULL)
    {
        printf("Unaable to memory allocat \n");
    }
    else
    {
        newNode->no=data;
        newNode->next=NULL;
        temp=head;
        while(temp !=NULL && temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        printf("------DATA INSERTED SUCCESSFULY------\n");
    }
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
