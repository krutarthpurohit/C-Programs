/*Write a program that will print out all the rotations of a string input by the user. Eg. The 
rotations of word “space” are: space, paces, acesp, cespa, espac.*/

#include<string.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{   char word[20], new_str[20];
    int i , j, k;

    printf("\nEnter the string : ");
    gets(word);
    
    int string_length = strlen(word);
  
   
    char temp[string_length];
    for (int i = 0; i < string_length; i++)
    {
        int j = i;  
        int k = 0;  
  
   
        while (word[j] != '\0')
        {
            temp[k] = word[j];
            k++;
            j++;
        }
  

        j = 0;
        while (j < i)
        {
            temp[k] = word[j];
            j++;  //for word
            k++;  // for temp
        }
  
        printf("%s\n", temp);
    }

    return 0;
}
