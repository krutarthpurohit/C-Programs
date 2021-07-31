#include<stdio.h>
#define m 3
struct telephone
{
    char name[30];
    long number;
};
int main()
{
int i;
struct telephone person[m];
FILE *fp;
    for (i=0;i<m;i++)
    {
    printf("Enter the information of person %d: ",i);
    scanf("%s %ld",person[i].name,&person[i].number);
    }
    
    fp = fopen("tele.txt","w");
    
    for(i=0;i<m;i++)
    fprintf(fp,"%s %ld\n",person[i].name,person[i].number);
    fclose(fp);
return 0;
}