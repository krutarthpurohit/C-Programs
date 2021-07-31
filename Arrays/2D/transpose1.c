//Write a program to find the transpose of the 3x3 matrix.

#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int a[3][3];

    printf("\nProvide the elements \n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {                                            
            scanf("%d",&a[i][j]);
        }printf("\n");
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", a[j][i]);    // changing the i--> j and j--> i, this will transpose the matrix
        } 
        printf("\n");
        
    }
    return 0;

}
