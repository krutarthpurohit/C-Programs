//switching the values of two variables

#include <stdio.h>
#include  <math.h>
int main(int argc, char const *argv[])
{
    int a=2 ,b=3 , temp=0 ;
    printf("\n\n a= %d", a);
    printf("\n\n b= %d", b);
  
  
    a=a+b;
    b=a-b;
    a=a-b;
  
    printf("\n\n a= %d", a);
    printf("\n\n b= %d", b);
 
    return 0;
}