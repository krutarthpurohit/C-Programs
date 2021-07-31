/*Write a program to find the longest word from the entered string and also find its length 
using pointer.*/

#include<stdio.h>
#include<string.h>
int main( )
{
    char s[100],s1[100][100];
    int i, count=0, x=0, l[50]={0}, max=0;

    printf("Enter string: ");
    gets(s);

    for ( i = 0; *(s+i) != '\0'; i++)
    {
        if (*(s+i) != ' ')
        {
            *(*(s1+count)+x)=*(s+i);
            x++;
        }
        else if (*(s+i)==' ')
        {
            count++;
            x=0;
            continue;
        }
    }
    for ( i = 0; i <= count; i++)
    {
        l[i]=strlen(*(s1+i));
            if (l[i]>max)
               max=l[i];
    }
       
       for ( i = 0; i <+ count; i++)
        if(max==l[i])
            break;

    printf("Longest word is %s.",*(s1+i));       

return 0;
}


///////////////////////////////////// Another Program///////////////////////////////////////////////////
// #include <stdio.h>

// void mystrcat(char *s1, char *s2)
// {
//     while (*s1 != '\0')
//     {
//         s1++;
//     }
//     while (*s2 != '\0')
//     {
//         *s1 = *s2;
//         s1++;
//         s2++;
//     }
//     *s1 = '\0';
// }

// int main()
// {
//     char a[200], b[200];

//     char *s1 = a;
//     char *s2 = b;

//     printf("Enter two strings which you want to concinate");
//     scanf("%s%s", s1, s2);

//     mystrcat(s1, s2);

//     printf("%s", s1);
//     return 0;
// }