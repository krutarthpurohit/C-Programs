/*Write a program to convert decimal number entered by used in its equivalent binary number 
using pointer.*/

#include<stdio.h>      
int main()
{  
    int a[10],n,i=0;    int *p;
    //system ("cls");  
        printf("Enter the number to convert: ");    
        scanf("%d",&n);    
    p=&n;
    
    for(i=0;(*p)>0;i++)    
    {    
        a[i]=(*p)%2;    
        (*p)=(*p)/2;    
    }    
    printf("\nBinary of given Number is ");    

    for(i=i-1;i>=0;i--)    
    printf("%d",a[i]);    
    
    return 0;  
}  