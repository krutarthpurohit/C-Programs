/*Write a program that performs like the following Linux command: cp*/

#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *fs, *ft;
    int ch, flag;
    if(argc!=3)
    {
        printf("Invalid numbers of arguments");
        return 1;
    }
    fs=fopen(argv[1], "r");
    if(fs==NULL)
    {
        printf("Unable to find source file");
        return 1;
    }
    ft=fopen(argv[2], "w");
    if(ft==NULL)
    {
        printf("Unable to open target file");
        fclose(fs);
        return 1;
    }
    while(1)
    {
        ch=fgetc(fs);
        if (feof(fs)) break;
        fputc(ch,ft);
        flag=1;
    }
    if(flag=1)
    printf("File successfully copied");
    fclose(fs);
    fclose(ft);
    return 0;
}