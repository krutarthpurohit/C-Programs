/*Modify the above program so that it reads a line of text from keyboard (including white 
spaces) and counts the no. of characters & words. Assume that the words are separated by 
one blank space only.*/

#include<stdio.h>
#include<string.h>
int main( )
{
int i , count=0;
char name , a[100];   //array can store characters upto 100.
    printf("Enter characters (STRING) \n");
        gets(a);  // getting the whole string  NOTE: if we use scanf function, this function terminates the sting when it reads the space. So, only single word can be inputted in scanf function.
    printf("OUTPUT= %s\n",a);
    printf("No. of characters= %d\n",strlen(a));   // Function to get no. of characters of a string
        for(i=0; i<100; i++)
        {
            if (a[i] == ' ')  // countiong the number of white spaces
            count= count+1;   
            else
            { 
                continue;
            }
            
        }
        printf("No. of Words= %d\n",count+1); // number of words = number of spaces + 1, eg: Hello World, No. of spaces=1. But No. of words= 1+1 =2 words
return 0;
}
