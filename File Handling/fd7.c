/* Write a program to write the 10 numbers into file Number.txt. Then read the content of file 
Number.txt. Write even numbers from 10 numbers in Even.txt file and odd numbers in 
Odd.txt file. */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
FILE *f1,*f2,*f3;
int number,i;
 printf("Contents of DATA file\n");
 f1=fopen("data1.txt","w");
 for ( i = 1; i <= 10; i++)
 {
 scanf("%d", &number);
 if (number==-1)
 break;
 
 putw(number,f1);
 }
 fclose(f1);
 
 f1=fopen("data1.txt","r");
 f2=fopen("odd1.txt","w");
 f3=fopen("even1.txt","w");
 
    while ((number=getw(f1))!= EOF)
    {
    if(number%2 == 0)
    putw(number,f3);
    else
    putw(number,f2);
    }
 
 fclose(f1);
 fclose(f2);
 fclose(f3);
 
 f2=fopen("odd1.txt","r");
 f3=fopen("even1.txt","r");
 
 printf("\n\nContents of ODD file\n\n");
 while ((number=getw(f2))!=EOF)
 printf("%4d",number);

 printf("\n\nContents of EVEN file\n\n");
 while ((number=getw(f3))!=EOF)
 printf("%4d",number);
 
 fclose(f2);
 fclose(f3);
 
}
