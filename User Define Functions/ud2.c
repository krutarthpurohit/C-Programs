/*Modify the above program using with return type with argument method.*/

#include<stdio.h>
int main()
{
  float divide(int,int);
  int a,b; float c;
    printf("\nEnter the two integer number: ");
    scanf("%d%d",&a,&b);
    c= divide(a,b);
    printf("%f",c);
}
float divide( int x,int y)
{
    float z;
    z=(float)x/y;
    return z;
}