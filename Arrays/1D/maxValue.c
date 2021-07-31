/* Finding the maximum value of the elements present in the array */

#include <stdio.h>
#define n 10
int main() 
{
    int i;
    float arr[100];
    for (i = 0; i < n; ++i) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
    for (i = 1; i < n; ++i) 
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    printf("Largest element = %.2f", arr[0]);
    return 0;
}
