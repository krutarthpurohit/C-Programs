/*Write a program to copy the content of one file into another.*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1, *fp2, *fopen();
    int c;
    char fname1[40], fname2[40];
    printf("Enter source file:");
    gets(fname1);
    printf("enter destination file:");
    gets(fname2);
    fp1 = fopen(fname1, "r");
    fp2 = fopen(fname2, "w");
    if (fp1 == NULL)
    {
        printf("Cannot open %s file for reading",fname1);
        exit(1);
    }
    else if (fp2 == NULL)
    {
        printf("Cannot open %s file for writing", fname2);
        exit(1);
    }
    else
    {
        c=getc(fp1);
        while (c!= EOF)
        {
            putc(c,fp2);
            c=getc(fp1);
        }
    fclose(fp1);
    fclose(fp2);
    printf("%s copied to %s", fname1, fname2);
    }
}




///////////////////  OUTPUT  ////////////////////////
// //Enter source file: first.txt
// enter destination file: odd.txt
// first.txt copied to odd.txt