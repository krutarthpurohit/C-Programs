/*SAMPLE PROGRAM (LAB_3 (CP- II Sem 2))*/
/* Get the string from the user and find no. of characters and no. of bytes allocated for name */
#include<stdio.h>
#include<string.h>

int main( )
{
int i = 0;
char ch , name[20];
    printf("Enter characters, terminate the input by pressing spacebar \n");
        while( ( ch = getchar( ) ) != ' ' ) // gettig input from the user, the moment it finds first white space, it will count only the first word
            name[i++]=ch ;
            name[i]='\0'; // in the end, last index no. is allocated to '\0'
    printf("Total Number of characters Entered by user = %d\n",i+1);  // the number of characters will be always be +1, because of the '\0' it counts in the end of the word
    printf("Number of informative characters are %d \n",strlen(name)); // This function will strictly provide the number if characters (letters) of the word
    printf("Number of bytes allocated for name = %d\n",sizeof(name)); // getting the size of array- name
return 0;
}
