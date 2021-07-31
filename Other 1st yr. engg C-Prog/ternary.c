//Example of ternary operator

#include<stdio.h>
int main( )
{
int a,b,c,x,largest;
a = 9;
b = 12;
c = 3;
x = a > b ? a : b;
largest = x > c ? x : c;
printf("largest=%d\n",largest);
return 0;
} 