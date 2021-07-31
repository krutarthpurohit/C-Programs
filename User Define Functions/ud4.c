/*Write a user defined function Max( ) which will find maximum number from entered three 
numbers.*/

#include<stdio.h>
int Max(int x, int y,int z)
{
    int m;
    if(x>y && x>z)
        m=x;
    else if (y>x && y>z)
        m=y;
    else
        m=z;
    
    return m;
}
int main(int argc, char const *argv[])
{
    int a,b,c;
    int max;

    printf("\nEnter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    max=Max(a,b,c);
    printf("\nMaximum of three numbers is: %d",max);
    return 0;
}
