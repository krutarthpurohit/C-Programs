#include<stdio.h>
void main(int argc, char *argv[ ])
{
    int i;
    FILE *fp;
    fp = fopen(argv[1], "w");
    for (i=2;i<argc;i++)
    {
        fprintf(fp,"%s",argv[i]);
    }
    fclose(fp);
}