#include<stdio.h>
int main( )
{
int *p,*q;
int x,y,a;
    printf("Enter 2 values\n");
    scanf("%d",&x);
    scanf("%d",&y);
    p = &x;
    q = &y;
    
    a = *p + *q;
printf("Address of p, q and x, y are %d, %d and %d, %d\n",&p,&q,&x,&y);
printf("Address and values of p, q and x, y are %d, %d and %d, %d",p,&q,x,&y);
}


/////////////////////SAMPLE PROG////////////////////////
// #include<stdio.h>
// int main( )
// {
// int *p,*q;
// int x,y,a;
//     printf("Enter 2 values\n");
//     scanf("%d",&x);
//     scanf("%d",&y);
//     p = &x;
//     q = &y;
    
//     a = *p + *q;
// printf("Address of a= %d",a);
// }

