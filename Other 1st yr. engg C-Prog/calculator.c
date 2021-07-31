/* Use switch case to make a calculator */

#include<stdio.h>
int main( )
{
        int n1,n2,z;
        char value;
     printf("enter +, - , / *  \n\n");
     value=getchar( );

    switch(value)
   {
        case '+':
        
        printf("Enter two digits\n\n");
        scanf("%d", &n1); scanf("%d", &n2);

        z=n1+n2;
        printf("SUM: %d", z);
        break;

        case '-':
                printf("Enter two digits\n\n");
        scanf("%d", &n1); scanf("%d", &n2);

        z=n1-n2;
        printf("SUM: %d", z);
        break;

        case '*':
                printf("Enter two digits\n\n");
        scanf("%d", &n1); scanf("%d", &n2);

        z=n1*n2;
        printf("SUM: %d", z);
        break;

        case '/':
                printf("Enter two digits\n\n");
        scanf("%d", &n1); scanf("%d", &n2);

        z=n1/n2;
        printf("SUM: %d", z);
        break;
    }
return 0;
}