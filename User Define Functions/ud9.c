/*Write a user defend function Isupper( ) which will check enter character is in upper case or 
not. If it is in upper case, convert into lower case using another user defined function 
Convert( ). Write a function space(x) that can be used to provide a space of x positions 
between two output numbers.*/

#include<stdio.h>
void space(int x)
{
    for(int i=1;i<=x;i++)
        printf(" ");
}
int main(int argc, char const *argv[])
{
    int check_upper(char),s,check;
    char convert(char), ch;

    printf("Enter letter: ");
    scanf("%c", &ch);

    check= check_upper(ch);
    if(check==0)
    {
        printf("Entered character is uppercase.\n");
    }
    else if(check == 1)
    {
        printf("Entered character is not in uppercase.\n Converted character: %c \n", convert(ch));
        printf("Entered number of spaces between entered and converted character: ");
        scanf("%d",&s);
        printf("%c",ch);
        space(s);
        printf("%c",convert(ch));
        printf("\n");
    }
    return 0;
}
int check_upper(char ch)
{
    if(ch>= 'A' && ch<= 'Z')
        return 0;
    else
        return 1;
}
char convert(char ch)
{
    return ch-32;
}