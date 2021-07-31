/*Modify the above program to count all elements, which are divisible by 5 defining and using 
a function scale5( ) and print all the numbers.*/

#include<stdio.h>
int main()
{
    int scale5(int);
    int i,k,a[10];

    for(i=0;i<10;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
        printf("a[%d] = %d\n",i,a[i]);
    
    k=0;
    for(i=0;i<10;i++)
    {

        if(scale5(a[i])==1)
        {
            k++;
            printf("%d\n",a[i]);
        }
    }
    
    
    return 0;
}

int scale5(int j)
{
    if(j%5 ==0)
    return 1;

    else
     return 0;

}