/*Write down macro definitions for the following: 
• To test whether a character entered is a small case letter.*/

#include <stdio.h>
#define TEST(ch) (ch>='a' && ch<='z')
int main( )
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if((TEST(ch))!='\0')
    printf("Entered character is in Lower-case");
    else
    printf("Entered character is in Upper-case");
    return 0;
}