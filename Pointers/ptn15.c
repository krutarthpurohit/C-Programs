/*Modify the above program to read the data of five students and display the student’s name, 
who is having the highest marks.*/

#include<stdio.h>
#include<string.h>
struct student
{
 int number;
 int marks;
 char name[25];
}st,*p;
int main()
{
 p=&st;
 int i,max=0;
 char temp[25];
 printf("Enter the ID, Marks and Name of student: \n");
 for(i=0;i<3;i++)
 scanf("%d %d %s", &(p+i)->number, &(p+i)->marks, (p+i)->name);
 
 for(i=0;i<3;i++)
 {
    if((p+i)->marks > max)
    {
    max = (p+i)->marks;
    strcpy(temp,(p+i)->name);
    }
 }
 printf("\nHighest marks= %d, Scored by: %s",max,temp);
 return 0;
}