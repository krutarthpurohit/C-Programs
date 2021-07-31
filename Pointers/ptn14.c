#include<stdio.h>
struct student
{
    int number;
    int marks;
    char name[25];
}st,*p;
int main( )
{
p=&st;
printf("enter the data: ");
scanf("%d %d %s",&p->number,&p->marks,p->name);
printf("%d\t%d\t%s",p->number,p->marks,p->name);
return 0;
}