//Write a program to check whether a entered number is Even Number or Odd Number.

#include <stdio.h>
#include  <math.h>
int main(int argc, char const *argv[])
{  
  int val,i ;
  printf("\n ENTER THE LIMITING VALUE \n\n");        
    scanf("%c", &val);             
  
for ( i=1; i<=val; i++ )                                
{
  if ( i%2==0)
  {
    printf("\n Even Number %d \n\n", i);   

  }
  else
  {
    printf("\n Odd Number %d \n\n", i);
  }
  
}
  return 0;

} 