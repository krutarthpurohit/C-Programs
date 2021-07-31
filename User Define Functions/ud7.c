/*Write a program to find factorial of given number using a recursive function.
*/

#include<stdio.h>
int factorial(int num)
{  
    if(num >= 1)
      return num*factorial(num-1);
    else
        return 1;
}
int main(int argc, char const *argv[])
{   
    int dig;

    printf("\nEnter the number: ");
    scanf("%d",&dig);

    
    dig=factorial(dig);

    printf("\n%d",dig);
    return 0;
}