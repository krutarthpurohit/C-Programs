/*Modify the above program to print the content of a file using command line argument.*/

#include<stdio.h>
void main(int argc, char *argv[ ])
{
    int i;
    FILE *fp;
    char word[100];
    fp = fopen(argv[1], "r");
    for (i=1;i<argc;i++)
    {
        fscanf(fp,"%s", word);
        printf("%s", word);
    }
    fclose(fp);
}