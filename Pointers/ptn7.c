#include<stdio.h>
int main( )
{
    char name[6]="DELHI";
    char *p;
        p=name;
        
        printf("%s\n",p);
    
    while(*p!='\0')
    {
    printf("%c\n",*p);
    p++;
    }

return 0;
}
