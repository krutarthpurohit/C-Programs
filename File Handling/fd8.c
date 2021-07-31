/*Write a program to split up a given text file into two different files with the size equal to half 
of the original file*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fp1,*fp2; char c; int i,count=0;
    fp = fopen("hello.txt","r");
    fp1 = fopen("1.txt","w");
    fp2 = fopen("2.txt","w");
    while((c=getc(fp)) != EOF)
    {
        count++;
        printf("%c",c);
    }
    rewind(fp);
    for(i=0;i<count/2;i++)
    {
        c=getc(fp);
        putc(c,fp1);
    }
    for(i=count/2;i<count;i++)
    {
        c=getc(fp);
        putc(c,fp2);
    }
    fclose(fp);
return 0;
}
