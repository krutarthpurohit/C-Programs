/*Write a program to find lcm of two numbers using pointer.*/

#include <stdio.h>   
void main()  
{  
    int num1, num2, max_div, flag = 1;  int *p, *q;
      
    printf( "Enter any two positive numbers to get the LCM \n");  
    scanf(" %d %d", &num1, &num2);  
      
    p=&num1;
    q=&num2;
    max_div = ((*p) > (*q)) ? (*p) : (*q);  
    
    while (flag)  
    {  
        if (max_div % (*p) == 0 && max_div % (*q) == 0)  
        {  
            printf( "The LCM is %d. ",max_div);  
            break;  
        }  
        ++max_div;  
    } 

}