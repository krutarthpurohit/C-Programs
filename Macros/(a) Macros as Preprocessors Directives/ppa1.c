#include <stdio.h>
#define M 5
#define square(x) ((x)*(x))
int main()
{
int p = M;
p++;
printf("Square of p = %d\n",square(p));
}