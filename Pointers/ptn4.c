/*Write a program to reverse a given array of 20 elements using pointers.*/

#include<stdio.h>
void reverse(int,int *);
int main()
{
    int a[5],*p,i;
    p=a;
    for(i=0; i<5 ; i++)
    {
        printf("Enter numbers in array:");
        scanf("%d",p+i);
    }
    reverse(i,p);
    return 0;
}
void reverse(int i, int *p)
{
    for(i=i-1 ; i>=0 ; i--)
        printf("%d\n",*(p+i));
}