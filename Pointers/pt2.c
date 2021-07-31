/*Modify the above program to print address of variables.*/

#include<stdio.h>
int main( )
{
int *p,*q;
int f1,f2,Sum,Multi,Sub; float Div;
    printf("Enter the first value\n");
    scanf("%d",&f1);
    printf("Enter the second value\n");
    scanf("%d",&f2);
   
    p=&f1;
    q=&f2;

    Sum= (*p)+(*q);
    Sub= (*p)-(*q);
    Div= (*p)/(*q);
    Multi= (*p)*(*q);
    
printf("Addition = %d \n Subtraction = %d \n Division = %.3f \n Multiplication = %d",Sum,Sub,Div,Multi);
}