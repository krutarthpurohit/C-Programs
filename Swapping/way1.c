
//swapping using 3 variable
#include<stdio.h>
void swap(int a,int b){ // a = x = 20    and    b = y = 10
    int temp;  //3rd variable to store the value temporarily

    temp = a;  //assigning value of 'a' to 'temp'. Therefore, temp = 20
    a = b;     //assigning value of 'b' to 'a'. Therefore, a = 10
    b = temp;  //assigning value of 'temp' to 'b'. Therefore, b = 20

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
