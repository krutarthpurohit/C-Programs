/*Write a program to check whether the string is a palindrome or not.*/

#include<stdio.h>
#include<string.h>

int main()
{ 
    char word[20], temp;
    int string_length;
    printf("Enter a word: \n");
    gets(word);
    string_length= strlen(word); 
    int i,a=0;
    for(i=0; i<string_length/2; i++)
        {
            if(word[string_length-i-1] == word[i])
            {
                a++;
            }
        }
        if(a == string_length/2)
        {
            printf("This is a Pallindrome");
        }
        else
        {
            printf("This is not a Pallindrome");
        }
    return 0;
}