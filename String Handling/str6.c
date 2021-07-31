/*Program which gets 2 strings from the user and check whether both of them are equal or not. WAP without using 'strcmp' function*/

#include<string.h>
#include<stdio.h>                       // NOTE: THIS FUNCTION IS NOT CASE SENSITIVE
int check(char a[],char b[])
{  
int i,c=0;
   int length_a=strlen(a);  //calculating length of string a
   int length_b=strlen(b);  //calculating length of string b
 
 if(length_a==length_b)
    { for( i=0; i<=length_a-1; i++)  // assuming length of string a and string b are equal
        {
             if(a[i]==b[i])  //checking letters of both the string having same index
            {
                 c=c+1;    //c will be increased till the length of the string a (string b as well)
            }
        }
        if (length_a==c)  // confirming the length of both the strings are equal 
           { return 0; }  // if both the string length are equal to c and both the strings are equal, so, return0
                             //any of string must be equal to c (because 'c' must be equal to both string length, because both strings are equal)
        
    }
    else
    {
        return 1;
    }
    
}
int main(int argc, char const *argv[])
{  char a[30],b[30];
    printf("Enter the first string\n");
      gets(a);
    printf("Enter the secound string\n");
      gets(b);
     
     int ans=check(a,b);  // calling the functions
     if(ans==0)  
     { printf("Two Strings are Equal"); }
     else 
     {
         printf("Two strings are not equal");
     }
     
    return 0;
}
