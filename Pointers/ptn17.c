/*Write a function to determine maximum or minimum number from two numbers entered 
from the keyboard and display in calling function using function returning pointer.*/

#include<stdio.h>
int main()
{
 int *larger(int *, int *);
 int *smaller(int *, int *);
 int a, b;
 int *p, *q;
 
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
 
 p=larger(&a, &b);
 q=smaller(&a, &b);
 
    printf("Maximun number is: %d\n", *p);
    printf("Minumum number is: %d", *q);
 return 0;
}
int *larger(int *x, int *y)
{
 int *m;
 
    if(*x>*y)
    m=x;
    else
    m=y;
 
 return m;
}
int *smaller(int *x, int *y)
{
 if(*x<*y)
 return x;
 else
 return y;
}