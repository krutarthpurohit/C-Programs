//swapping using 2 variable- using bitwise operator '^' - XOR
#include<stdio.h>
void swap(int a,int b){ // a = x = 20    and    b = y = 10
    
    a = a ^ b; //x=x^y=(0001 0100)^(0000 1010)=0001 1110 |x=30
    b = a ^ b; //y=x^y=(0001 0100)^(0001 1110)=0000 1010 |y=20
    a = a ^ b; //x=x^y=(0000 1010)^(0001 1110)=0001 0100 |x=10

    printf("\n\nAfter swapping\n");
    printf("x:%d  y:%d",a,b);

}

int main(int argc, char const *argv[])
{
    int x=20; //1st variable holding value 20
    int y=10; //2nd varibale holding value 10

    printf("\n\nBefore swapping\n");
    printf("x:%d  y:%d",x,y);

    swap(x,y);

    return 0;
}

