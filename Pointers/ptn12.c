#include<stdio.h>
int main( )
{
void swap(char **,char **);
char *s1 = "Sea";
char *s2 ="C";  
    printf("Before swap: %s %s\n",s1,s2);
    swap(&s1,&s2);
    printf("After swap: %s %s\n",s1,s2);
return 0;
}
void swap(char **p1,char **p2)
{
    char *temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}