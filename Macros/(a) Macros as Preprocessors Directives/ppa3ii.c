/*Write down macro definitions for the following: 
• To obtain the largest number among three entered numbers. */

#include <stdio.h>
#define MAX(x, y, z) ( (x > y && x > z) ? x : ( y > z) ? y : z )
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Maximum number is: %d", MAX(a, b, c));
    return 0;
}
