/*Write a program to make structure of 100 students. Name, roll no., marks of 5 subjects is 
members of the structure. Make a function merit( ) which arranges 100 students according 
to their result using pointer*/

#include<stdio.h>
struct student
{
 char name[10];
 int roll_no;
 int marks[5];
 int total;
}st[5],*p,temp;
void merit(struct student *p,int);

void main()
{
 int i,j,n;
 
 printf("Enter number of students: ");
 scanf("%d",&n);
 p = st;
 
 printf("Enter name, roll_no and 5 subjects marks of student: \n");

    for(i=0;i<n;i++)
    {
    (p+i)-> total = 0;
    scanf("%s %d",(p+i)-> name, &(p+i)-> roll_no);
        
        for(j=0;j<5;j++)
        {
            scanf("%d",&(p+i)->marks[j]);
            (p+i)-> total += (p+i)->marks[j];
        }
    }
 
 merit(&st[0], n);
 
 printf("\nStudent name, total and 5 subject marks after rearranging : \n");
    for(i=0;i<n;i++)
    {
    printf("%s %d\t",(p+i)->name,(p+i)->total);
        
        for(j=0;j<5;j++)
        printf("%d\t",(p+i)->marks[j]);
 
        printf("\n");
    }
}

void merit(struct student *p, int n)
{
 int i,j;
 struct student temp;
 for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
        if((p+j)->total > (p+i)->total)
    {
        temp = *(p+j);
        *(p+j)=*(p+i);
        *(p+i)=temp;
    }
}