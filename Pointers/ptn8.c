/*Modify the above program to find length of a string using pointer.*/

#include<stdio.h>
#include<string.h>
int main( )
{
    char name[25];
    char *p;  int sum=0,i=0;
        printf("\nEnter the string: ");
        gets(name);
    
    p=name;
 
    while (*p!='\0')
    {
        sum=sum+1;
        p++;
    }
        printf("\nlength of the string is %d",sum);
    
return 0;
}