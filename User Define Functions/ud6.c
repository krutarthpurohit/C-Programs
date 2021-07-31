/*Write a user defined function Even ( ) which will check enter number is even or odd. If it is 
even, it return 1 else 0.*/

#include<stdio.h>
int Even(int num)
{  
    if(num%2 == 0)
        return 1;
    else
        return 0;
}
int main(int argc, char const *argv[])
{
    int dig, eve;

    printf("\nEnter a number: ");
    scanf("%d",&dig);

    eve=Even(dig);
    printf("\n %d ",eve);

    return 0;
}