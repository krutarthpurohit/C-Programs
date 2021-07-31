/*Write down macro definitions for the following: 
• To find the circumference of a circle.*/

#include <stdio.h>
#define CIRCUMFERENCE(x) ((2)*(3.14159)*(x))
int main()
{
    float rad;
    printf("Enter the radius: ");
    scanf("%f", &rad);
    printf("Circumference of circle is: %.2f unit", CIRCUMFERENCE(rad));
    return 0;
}