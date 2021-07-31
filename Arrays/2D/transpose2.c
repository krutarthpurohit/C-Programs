/*This is the program in which the user defines the no. of rows and columns of the matrix and finds transpose that matrix*/

#include<stdio.h>
int main(int argc, char const *argv[])
{   int m,n;
    printf("\nProvide number of Rows and Cloulmns \n");
    scanf("%d %d",&m);   // m is for number of rows
    printf("\nProvide Columns \n");
    scanf("%d",&n);  // n is for number of columns

   int a[m][n];
    printf("Matrix of %d x %d",m,n);  // m x n

    //filling the m x n matrix with its elements
    printf("\nProvide the elements \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {                                            
            scanf("%d",&a[i][j]);
        }printf("\n");
        
    }
printf("Transposed Matrix of %d x %d",n,m);  // n x m
    //transposing the m x n matrix to n x m matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           printf("%d \t", a[j][i]);    // changing the i--> j and j--> i, this will transpose the matrix
        } 
        printf("\n");
        
    }
    return 0;

}