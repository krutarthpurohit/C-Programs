/* This program sorts the string in alphabetical order*/
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{  
    char word[20];
    printf("\nEnter a word : ");
    gets(word); 
    int i,j;
    char temp;
    int string_length= strlen(word); // finding the length of the string

     for(i=0; i<string_length; i++) // pointer 1 at first letter
     {
         for(j=i+1; j<string_length; j++)  //pointer 2 at second letter
         {
             if(word[i]>word[j])  // swaping the pointers if pointer 1 is greater than pointer 2
             {
                 temp = word[i];
                 word[i] = word[j];
                 word[j] = temp;
             }
             else
             {
                 continue;
             }
             
         }
     }
         
     printf("\nAlphabetically sorted String: %s\n", word);
     
    return 0;
}