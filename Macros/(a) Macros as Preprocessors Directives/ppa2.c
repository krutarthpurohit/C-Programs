/*Modify the program to find the cube of a given number using a macro definition*/

#include <stdio.h>
#define M 5
#define CUBE(x) ((x)*(x)*(x))
int main( )
{
    int p;
    printf("Enter a number: ");
    scanf("%d", &p);
    printf("Cube of entered number = %d\n", CUBE(p));
    return 0;
}
