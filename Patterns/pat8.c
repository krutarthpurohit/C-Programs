#include <stdio.h>

int main()
{
    for(int i=1; i<10 ; i++)
    {
        if(i%2 == 0)
        {
            for(int j=1; j<=i; j++)
            {
                if(j%2 == 0)
                printf("1");
                else
                printf("0");
            }
            printf("\n");
        }
        else
        {
            for(int k=1; k<=i; k++)
            {
                if(k%2 == 1)
                printf("1");
                else
                printf("0");
            }
            printf("\n");
        }
        
        
    }
    return 0;
}

/*
1
01
101
0101
10101
010101
1010101
01010101
101010101
*/