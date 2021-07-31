/*Write a program to display an entered string in the following format: Assume input string: 
HELLO*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int s,c,r;
    char e[20];
     printf("\nEnter String : ");
     gets(e);
  for(r=1;r<=5;r++)         //row
{
          for(s=0;s<5-r;s++)    //space
                 { 
                  printf(" ");
                 }
               for(c=0;c<r;c++)    //index values
                 {
                  printf("%c", e[c]);         
                 }
 printf("\n");
}
    return 0;
}
// Enter String : HELLO
//     H
//    HE
//   HEL
//  HELL
// HELLO