/*Write a program to find inverse of a matrix using pointers*/

#include<stdio.h>
int main()
{
    int a[5][5],i=0,j,da=0;
    int *pa;
    float b[3][3];
    float *pb;
    pa = a[0];
    pb = b[0];

    printf("enter array values:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",(pa + 5*i + j));
    }
    printf("entered array values are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d ",*(pa+5*i+j));
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=3;j<5;j++)
        {
            *(pa+5*i+j) = *(pa+5*i+j-3);
        }
    }
    for(i=3;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            *(pa+5*i+j) = *(pa+5*i+j-15);
        }
    }
    i=0;
    for(j=0;j<3;j++)
    {
        da += *(pa + 5*i +j)*((*(pa+5*(i+1)+j+1)* *(pa+5*(i+2)+j+2)) - (*(pa+5*(i+2)+j+1)* *(pa+5*(i+1)+j+2)));
    }
    printf("value of determinent of matrix is %d.\n\n",da);
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            *(pb + 3*i +j) = (*(pa+5*(i+1)+j+1)* *(pa+5*(i+2)+j+2)) - (*(pa+5*(i+2)+j+1)* *(pa+5*(i+1)+j+2));
        }
    }
    printf("cofactor matrix of the entered matrix is:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%f\t",*(pb+3*i+j));
        printf("\n");
    }
     printf("\n");
    if(da)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                *(pb + 3*i +j) =  *(pb + 3*i +j)/da;
            }
        }
        printf("inverse of the entered matrix is:\n\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            printf("%f\t",*(pb+3*i+j));
            printf("\n");
        }
    }
    else
    printf("since value of entered matrix is 0,inverse does not exist.\n");
return 0;
}