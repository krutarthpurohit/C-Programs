/*Modify the program using calloc( ). Also differentiate malloc( ) & calloc( ).*/

#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int n, i, *arr;
    printf("How many elements do you want to enter: ");
    scanf("%d",&n);
    if(!(arr = (int *) calloc(n, sizeof(int))))
    {
        printf("No memory for the array");
        exit(1);
    }
    printf("Enter the elements:\n ");
    for(i=0;i<n;i++)
    scanf("%d", arr+i);
    printf("The entered array is: ");
    for(i=0;i<n;i++)
    printf("%d ",*(arr+i));
    free(arr);
    return 0;
}
