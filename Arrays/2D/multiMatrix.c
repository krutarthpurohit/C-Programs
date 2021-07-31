// program to multiply the two matrixs.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[3][3], b[3][3];
    int mult[3][3];
    printf("\n\n Provide the elements \n\n");
    
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
            scanf("%d",&b[i][j]);
        } printf("\n");
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mult[i][j]=0;
            
            for ( int k=0; k < 3; k++)
            {
                mult[i][j]= mult[i][j] + (a[i][k]*b[k][j]);
            }
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", mult[i][j]);
        } 
        printf("\n");
        
    }
    return 0;

}
