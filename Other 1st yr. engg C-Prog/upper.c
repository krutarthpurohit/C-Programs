// change the uppercase to lowercase and vice-versa

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{  char ch,s,a;
    
    printf("ENTER THE CHARACTER \n\n");
    scanf("%c", &s);

    isupper(s)?printf("1"):printf("0");

    //printf("Upper Case : %d", isupper(s) );
    
    //printf("Upper Case: %d", isupper(s) );
    printf(" \n");
    ch=tolower(s)?tolower(s):toupper(s);
    printf("%c", ch);


    return 0;
}
















// #include <stdio.h>

//   Int main()
// {
//     char ch;
//     printf("Enter any character: ");
//     scanf("%c", &ch);
//     if(ch >= 'A' && ch <= 'Z')
//     {
//         printf("'%c' is uppercase alphabet.", ch);
//     }
//     else if(ch >= 'a' && ch <= 'z')
//     {
//         printf("'%c' is lowercase alphabet.", ch);
//     }
//     else
//     {
//         printf("'%c' is not an alphabet.", ch);
//     }

//     return 0;
// }