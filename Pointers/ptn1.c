#include<stdio.h>
int main( )
{
    int i,j,t,n=10;
    int a[10],*p;
        
        p=a;
        for(i=0;i<n;i++)
        {
            printf("enter the element of array:");
            scanf("%d",(p+i)); 
        }
        
for(i=0;i<n;i++)
printf("%d\n",*(p+i));

return 0;
}
