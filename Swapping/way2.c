//swapping using 2 variable- using arithmetic operator '+' and '-'
#include<stdio.h>
void swap(int a,int b){ // a = x = 20    and    b = y = 10
    
    a = a + b; //a = 20 + 10 =30
    b = a - b; //b = 30 - 10 =20
    a = a - b; //a = 30 - 20 =10


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

