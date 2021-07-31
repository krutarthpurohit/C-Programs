/*Write a program to store student’s data; name, roll_no, and marks of three subjects at run 
time and display the whole data base according to their merits.*/

#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    char name[20];
    int no,m[3];
    int total;
}data;
void main()
{
    int i,j,n;
    struct student data,*p,max;
    printf("enter no. of students: ");
    scanf("%d",&n);
    p = (struct student *)malloc(n * sizeof(struct student));
    if(p==NULL)
    {
        printf("not allocated");
        exit(1);
    }
    printf("enter the data:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d %d",(p+i)->name,&(p+i)->no,&(p+i)->m[0],&(p+i)->m[1],&(p+i)->m[2]);
         (p+i)->total = (p+i)->m[0]+ (p+i)->m[1]+ (p+i)->m[2];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((p+j)->total > (p+i)->total)
            {
                 max =*(p+j);
                *(p+j)=*(p+i);
                *(p+i)= max;
            }
        }
    }
    printf("According to merit:\n");
    for(i=0;i<n;i++)
    {
        printf("%s %d\t",(p+i)->name,(p+i)->total);
        for(j=0;j<3;j++)
        {
            printf("%d\t",(p+i)->m[j]);
        }
        printf("\n");
    }
    free(p);
}
