#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
int i ,n , j ,no=0;
char e[20];

printf ("\n Enter the string : ");
gets(e);

int string_length= strlen(e);

for(i=0 ; i<=string_length-1 ; i++)
    {
        for(j=0 ; j<=i ; j++)
         {     
               printf("%c",e[j]);
               
         }
               printf("\n");
    }
    return 0;
}

//  Enter the string : Hello
// H
// He
// Hel
// Hell
// Hello