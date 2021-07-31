#include <stdio.h>

int main(int argc, char const *argv[])
{
   int x=10;
   float y=10.5;
   char ch = 'a';

   printf("The value of intiger is %d \n", sizeof(x) );
   printf("The value of float is %f \n",sizeof(y)  );
   printf("The value of character is %c \n",sizeof(ch)  );
    return 0;
}     