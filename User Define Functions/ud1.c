#include<stdio.h>
int main( )
{
  void divide(int,int);
  int a,b;
    printf("Enter the two integer number");
    scanf("%d%d",&a,&b);
    divide(a,b);
}
void divide( int x,int y)
{
    float z;
    z=(float)x/y;
    printf("%f",z);
}