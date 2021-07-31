/*Write a program to arrange the strings (3 entered strings) according to their length using 
array of pointers.*/

#include<stdio.h>
#include<string.h>
int main()
{
 char *string[3]={"Ahmedabad", "Surat", "Rajkot"};
 int length1, length2, length3;
 int *l1=&length1, *l2=&length2, *l3=&length3;
 
 length1=strlen(string[0]);
 length2=strlen(string[1]);
 length3=strlen(string[2]);
 printf("Entered string is : %s %s %s\n\n", string[0], string[1], string[2]);
 
 if(*l1>*l2 && *l1>*l3)
 {
    if(*l2>*l3)
    printf("Arranged string is : %s %s %s", string[2],string[1],string[0]);
    else
    printf("Arranged string is : %s %s %s", string[1],string[2],string[0]);
 }
 else if(*l2>*l1 && *l2>*l3)
 {
    if(*l1>*l3)
    printf("Arranged string is : %s %s %s", string[2],string[0],string[1]);
    else
    printf("Arranged string is : %s %s %s", string[0],string[2],string[1]);
 }
 else if(*l3>*l2 && *l3>*l1)
 {
    if(*l2>*l1)
    printf("Arranged string is : %s %s %s", string[0],string[1],string[2]);
    else
    printf("Arranged string is : %s %s %s", string[1],string[0],string[2]);
 }
 return 0;
}