/*Modify the above program to print all odd and even elements featuring in the array using 
the same function.*/
#include<stdio.h>
int main( )
{
    int odd(int);
    int i,k,a[10], l=0;

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

        if(odd(a[i]))
        {
            k++;
            printf("Odd Element: %d\n",a[i]);
        }
        else 
        {   l++;
            printf("Even Element: %d\n",a[i]);
        }
    }
    printf("Total odd numbers are %d\n",k);
    printf("Total even numbers are %d",l);
    
    return 0;
}

int odd(int j)
{
    if(j%2)
    return 1;

    else
     return 0;

}