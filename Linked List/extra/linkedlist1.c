#include<stdio.h>
#include<stdlib.h>
#define NULL 0
struct linked_list
{
    int number;
    struct lined_list *next;
};
typedef struct linked_list node;

void create(node *p);
int count(node *p);
void print(node *p);

main()
{
    node *head;
    head=(node *)malloc(sizeof(node));

    create(head);
    printf("\n");

    print(head);
    printf("\n");
    printf("\nNumber of items= %d\n",count(head));
    return 0;
}

void create(node *list)
{
    printf("Input a number\n");
    printf("(type -999 at end):");
    scanf("%d",&list->number);

    if (list->number == -999)
    {
        list->next = NULL;
    }
    else
    {
        list->next = (node *)malloc(sizeof(node));
        create(list->next);
    }
    return;
}
void print(node *list)
{
    if(list->next != NULL)
    {
        printf("%d-->",list->number);
        print(list->next);
    }
    return;
}