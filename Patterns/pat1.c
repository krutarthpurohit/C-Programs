#include <stdio.h>
void main()
{
int i ,n , j ,no=0;

printf ("\n Enter Number of row: ");
scanf("%d", &n);
 
for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=i ; j++)
         {     no+=i;
               printf("%6d",no);
               
        }
               printf("\n");
    }
  
}

// Enter Number of row: 5
//      1
//      3     5
//      8    11    14
//     18    22    26    30
//     35    40    45    50    55