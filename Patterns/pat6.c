#include<string.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{   char word[20],temp, new_str[20];
    int string_length,i , j, k;

    printf("\nEnter the string: ");
    gets(word);
    
    string_length=strlen(word);

    for(i=0; i<string_length; i++)  
    {
        for(j=i; j<string_length; j++)
        {   
              new_str[j] = word[j+1];
              new_str[string_length-1]=word[0];
              
              printf("%c", new_str[j]);
        }
        printf("\n");
    }
    return 0;
}

// Enter the string : Space 
// paceS
// aceS
// ceS
// eS
// S