/*Insertion at the beginning of the list.*/
#include<stdio.h>
#include<stdlib.h>
struct list
{
    int no;
    struct list*next;
};
int main( )
{
    struct list *head,*ptr, *str,*element;
    int i=0,m,n,temp;
    head= malloc(sizeof(struct list));
    element =
    malloc(sizeof(struct list));
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
    printf("\n----------------------\n");
    printf("Enter Element which is insert to the beginning of the list\n");  scanf("%d",&element->no);
    element->next=head;
    printf("Press any key to display \n");
    ptr=element;
    while(ptr->next!=NULL)
    {
        printf("%d \n",ptr->no);
        ptr=ptr->next;
    }
    return 0;
}
