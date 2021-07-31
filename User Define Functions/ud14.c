/*Write a user defined function Reverse( ) which will reverse the string in reverse order.*/

#include <stdio.h>
#include <string.h>
void reverse(char [], int, int);
 
int main()
{
  	char Str[100], temp;
  	int i, j, len;
 
  	printf("\n Please Enter any String :  ");
  	gets(Str);
  	
  	len = strlen(Str);
  	reverse(Str, 0, len -1);
 
  	printf("\n String after Reversing = %s", Str);
  	
  	return 0;
}

void reverse(char Str[], int i, int len)
{
	char temp;
	temp = Str[i];
	Str[i] = Str[len - i];
	Str[len - i] = temp;
	
  	if (i == len/2)
  	{
		return;
  	}
   	reverse(Str, i + 1, len);
}