/*Modify the above program to sort the days of week in alphabetical order. Use sort( ) 
function that receives an argument as a pointer to the string. To swap the string, use the 
above swap( ) function.*/

#include<stdio.h>
#include<string.h>
void sort(char **);
void swap(char **,char **);
void main()
{
    char *s[7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int i;

    sort(s);

    printf("After sorting :\n\n");
    for(i=0;i<7;i++)
        printf("%s \n", s[i]);
}

void sort(char **s)
{
 int i,j;
 for(i=0;i<7;i++)
    for(j=i+1;j<7;j++)
        if(strcmp(s[i],s[j])>0) 
            swap(&s[i],&s[j]);
}
void swap(char **p1, char **p2)
{
    char *temp;
    temp =*p1;
    *p1 = *p2;
    *p2 = temp;
}
