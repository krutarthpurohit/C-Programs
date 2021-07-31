/*Program which gets 2 strings from the user and check whether both of them are equal or not, with using 'strcmp' function*/

#include<stdio.h>
#include<string.h>                                   //NOTE: THIS FUNCTION IS CASE SENSITIVE
int main(int argc, char const *argv[])
{  char a[30],b[30]; 
    printf("Enter the first string\n");
      gets(a);
    printf("Enter the secound string\n");
      gets(b);

     int x=strcmp(a,b); //if both the strings are equal, the function will return 0 and if both the string does not match with one another, the func. will give the difference between the two index no. of both the strings
     //if func. gives -ve value, string 'a' is alphabetically above the other string
     if(x==0)  
        printf("Two Strings are Equal"); 
     else 
        printf("Two strings are not equal");

    return 0;
}