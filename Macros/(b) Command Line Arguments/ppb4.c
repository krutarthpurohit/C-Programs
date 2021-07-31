/*Write a program to append one file in to another file using command line argument.*/

#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char *argv[])
{
    char c;
    FILE *fp1, *fp2;
    fp1 = fopen(argv[1], "r");
    if (fp1 == NULL)
    {
        printf("Unable to find file");
        exit(0);
    }
    fp2 = fopen(argv[2], "a");
    if (fp2 == NULL)
    {
        printf("Unable to find file");
        exit(0);
    }
    c = fgetc(fp1);
    while (c != EOF)
    {
        fputc(c, fp2);
        c = fgetc(fp1);
    }
    printf("Content in %s appended to %s", argv[1], argv[2]);
    fclose(fp1);
    fclose(fp2);
    return 0;
}