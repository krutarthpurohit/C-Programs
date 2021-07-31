/*Modify the above progam to write characters enter by the user until user press $. Also 
read the content of file and print the length of file first.txt exculding terminating character. */

#include<stdio.h>
int main()
{
FILE *fp;
char ch='a';
    int i=0;
    
    
    fp = fopen("first.txt","w");
    printf("Enter character and $ to STOP:\n");
        while ((ch=getchar())!='$')
            putc(ch, fp);
        
        putc(ch,fp);
        fclose(fp);
    

    fp=fopen("first.txt","r");
    printf("Entered characters are: \n");
        while ((ch=getc(fp))!='$')
        {
            printf("%c",ch);
            i++;
        }
        printf("\nEntered characters= %d", (i/2));
        fclose(fp);
return 0;
}