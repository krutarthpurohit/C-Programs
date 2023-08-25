//swapping using pointers
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    
    temp = *x;
    *x=*y;
    *y=temp;
    printf("\n\nAfter swapping\n");
    printf("x:%d y:%d",*x,*y);
}

int main()
{
    int x=20, y=10;
    printf("\n\nBefor swapping\n");
    printf("x:%d y:%d",x,y);
    swap( &x, &y);
    return 0;
}
