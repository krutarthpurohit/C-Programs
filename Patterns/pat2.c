#include <stdio.h>
int main(int argc, char const *argv[])
{
    int s,c,r;
  for(r=1;r<=5;r++)         //row
{
                for(s=1;s<=5-r;s++)    //space
                 { 
                  printf(" ");
                 }

               for(c=1;c<=r;c++)    //integer
                 {
                  printf("%d", r);         
                 }
 printf("\n");
}
    return 0;
}

//     1
//    22
//   333
//  4444
// 55555
