/*Modify the above program to check the validation of input then perform division of 
numbers. If inputs are invalid print appropriate message.*/

#include<stdio.h>
int main()
{
  float divide(int,int);
  int a,b; float c;
    printf("\nEnter the two integer number: ");
    scanf("%d %d",&a,&b);
    c=divide(a,b);
    
    if(c==1.0)
     printf("Not Valid Input");
    else
     printf("%f",c);
    
}
float divide( int x,int y)
{   
    float z,a=1.0;
    if(y!=0 && x!=0)
      return z=(float)x/y;
    else
      return z=1.0;
}