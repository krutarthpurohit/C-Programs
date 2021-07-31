#include<stdio.h>
#include<stdlib.h>
struct list
{
int no;
struct list*next;
};
int main( )
{
    struct list *head,*ptr, *str;
    int i=0,m,n,temp;
    head= malloc(sizeof(struct list));
    ptr=head;
    printf("Enter the elemnts .. at the end enter -999 \n");
    scanf("%d",&ptr->no);

    while(ptr->no != -999)
    {
    ptr->next = malloc(sizeof(struct list));
    i++;
    ptr=ptr->next;
    scanf("%d",&ptr->no);
    }
    ptr->next=NULL;
    printf("Thanks for entering %d elements \n \n ",i);
    printf("Press any key to display \n");
    ptr=head;
    
    while(ptr->next!=NULL)
    {
    printf("%d \n",ptr->no);
    ptr=ptr->next;
    }
return 0;
}

