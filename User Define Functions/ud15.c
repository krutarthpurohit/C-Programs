/*Write a user defined function Strcopy( ) which will copy the content of one string in to 
another.*/

#include <stdio.h>
void Strcpy(char [], char []);

int main() {
  char s[25], d[25];
   
  printf("Input 1st a string\n");
  gets(s);

  printf("Input 2nd string\n");
  gets(d);
  
  Strcpy(d, s);
  printf("The string: %s %s\n", d, s);

  return 0;
}

void Strcpy(char d[], char s[]) {
  int c = 0;
   
  while (s[c] != '\0') {
    d[c] = s[c];
    c++;
  }
  d[c] = '\0';
}