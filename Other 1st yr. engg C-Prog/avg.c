/* Finding the sum and average of the elements of 1D array */

#include <stdio.h>
#define n 10

int main() 
{
    float sum=0,avg=0;
    int arr[5];  int i;
    for (i = 1; i <= 5; i++) 
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 6; i++) 
    {
        printf(" %d, %d \n",i, arr[i] );
         //sum= sum + arr[i];
    }
        //avg=sum/10;
    // printf("Sum of element = %.3f \n",sum);
    // printf("Average of element = %.3f \n",avg);
    return 0;
}
