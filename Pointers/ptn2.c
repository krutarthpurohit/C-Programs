/*Modify the above program to calculate the total of all elements of an array using pointer.*/
//With using userdefine functions
#include<stdio.h>
void print(int,int*);
int main( )
{
    int i,j,t,n;
    int a[10],*p;
    p=a;
    n=10;
    for(i=0;i<n;i++)
    {
        printf("enter the element of array:");
        scanf("%d",p+i);
    }
    print(n,p);
    return 0;
}
void print(int n,int *p)
{
    int i;
    for(i=0 ; i<n ; i++)
        printf("%d\n",*(p+i));
}