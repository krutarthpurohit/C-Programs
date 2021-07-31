/*Modify this new program (using calloc( )) to allocate memory dynamically for a matrix (i.e., 
2-d array).*/

#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int r, c, i, *arr;
    printf("Enter no of rows and columns : ");
    scanf("%d %d",&r, &c);
    if(!(arr = (int *) calloc(r*c, sizeof(int))))
    {
        printf("No memory for the array");
        exit(1);
    }
    printf("Enter the elements : ");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            scanf("%d", (arr+2*r+c));
        }
    }
    printf("Entered elements : \n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("%d\t", *(arr+2*r+c));
        }
        printf("\n");
    }
    free(arr);
    return 0;
}
