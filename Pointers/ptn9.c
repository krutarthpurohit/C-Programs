/*Write a program to find occurrences of given character in entered string using pointer*/

#include<stdio.h>
#include<string.h>
int main( )
{
 char name[25],key[2];
 char *p, *c; int sum=0,no,sum1=0;
 printf("\nEnter the string: ");
 gets(name);
 printf("Enter the character: ");
 gets(key);
 
 p=name;
 c=key;
 
 
 while(*p!='\0')
 {
    if((*p)==(*c))
    sum=sum+1;
    p++;
 }
 printf("\n%c is %d times.",(*c),sum);
return 0;
}