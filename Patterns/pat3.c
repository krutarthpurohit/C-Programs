#include <stdio.h>
void main()
{
int i ,n , j ,no=0;

printf ("\n Enter Number of row : ");
scanf("%d", &n);

 
for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=i ; j++)
         {     //no+=i;
               printf("%6d",i);
               
        }
               printf("\n");
    }
  
}
// Enter Number of row : 5
//      1
//      2     2
//      3     3     3
//      4     4     4     4
//      5     5     5     5     5