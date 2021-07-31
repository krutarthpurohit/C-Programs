#include<stdio.h>
struct student
{
 char name[10];
 int roll_no;
 int marks[5];
 int total;
}std[10],*p,temp;
void sort(struct student *p,int);

void main()
{
 p = std;
 int n=10;
 printf("Enter name, roll_no and 5 subjects marks: \n");

    for(int i=0;i<10;i++)
    {
    (p+i)-> total = 0;
    scanf("%s %d",(p+i)-> name, &(p+i)-> roll_no);
        
        for(int j=0;j<5;j++)
        {
            scanf("%d",&(p+i)->marks[j]);
            (p+i)-> total += (p+i)->marks[j];
        }
    }
 
 sort(&std[0], n);
 
 printf("\nRearranging.. Sorting: \n");
    for(int i=0;i<n;i++)
    {
        printf("%s %d\t",(p+i)->name,(p+i)->total);
        
        for(int j=0;j<5;j++)
        printf("%d\t",(p+i)->marks[j]);
 
        printf("\n");
    }
}

void sort(struct student *p, int n)
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
