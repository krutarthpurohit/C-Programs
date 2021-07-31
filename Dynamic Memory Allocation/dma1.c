#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int n,i,*arr;
    printf("How many elements: ");
    scanf("%i",&n);
    printf("%i \n",n);
    if(!(arr = (int*)malloc (n*sizeof(int))))
    {
        printf("No memory for the array");
        exit(1);
    }
    printf("Enter the elements: \n");
    for(i=0; i<n; i++)
        scanf("%i",arr+i);
    printf("The entered array is \n");
    for(i=0; i<n; i++)
        printf("%i ",arr[i]);
    free(arr);
    return 0;
}
