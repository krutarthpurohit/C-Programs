/* Write a program to concate the content of two strings. */

#include<string.h>
#include<stdio.h>
int main( )
{
int i , count=0;
char sent , a[30], b[30];  
    printf("Enter the first word \n");
        gets(a); //getting string a
    printf("Enter the second word \n");
        gets(b);  //geting string b
        printf("%s\n", strcat(a,b));  //appending the two strings
return 0;
}