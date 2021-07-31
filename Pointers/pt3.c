/*Write a program to compute are and perimeter of circle using pointer.*/

#include<stdio.h>
int main( )
{
int *p,*q;
int r,A,C;
    printf("Enter the value of radius\n");
    scanf("%d",&r);
   
    p=&r;  
    A= 3.14*(*p)*(*p);
    C= 2*3.14* (*p);
    
printf("Value of Area and Parameter are %d and %d",A,C);
}