#include<stdio.h>
int main()
{
FILE *fp;
char ch='a';
    
    fp = fopen("first.txt","w");
    printf("Enter character: ");
        fputc(ch,fp);
        fclose(fp);

    fp=fopen("first.txt","r");
        ch=fgetc(fp);
        putchar(ch);
        fclose(fp);
return 0;
}