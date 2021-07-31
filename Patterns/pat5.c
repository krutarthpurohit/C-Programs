#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int s,c,r;
    char e[20];
     printf("\nEnter String : ");
     gets(e);
     
     int string_length= strlen(e);
  for(r=1;r<=string_length;r++)         //row
{
          for(s=0;s<string_length-r;s++)    //space
                 { 
                  printf(" ");
                 }
               for(c=0;c<r;c++)    //integer
                 {
                  printf("%c", e[c]);         
                 }
 printf("\n");
}
    return 0;
}

// Enter String : HEMANG
//      H
//     HE
//    HEM
//   HEMA
//  HEMAN
// HEMANG