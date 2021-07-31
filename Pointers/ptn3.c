/*Modify the above program to calculate the total of all elements of an array using pointer.*/
//Without using userdefine functions
#include<stdio.h>
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

    int sum=0;
    for(i=0 ; i<n ; i++)
        sum=sum+*(p+i);
        printf("Sum= %d\n",sum);
    return 0;
}
