/*Write a program to enter a sorted array and an integer value. Insert the new value at correct 
place using pointer.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
int n, num, i = 0;
        printf("\nEnter the number of elements in the array: ");
        scanf("%d", &n);
          
        int a[n+1];
          
        printf("\nEnter the elements (SORTED IN ASCENDING ORDER): \n");
        
        int temp = n;
          
        while (temp > 0) 
        {
           printf("Enter element %d : ", (i + 1));
           scanf("%d", &*(a + i));
           i++;
           temp--; 
        }
        printf("\n\nEnter the element you want to insert in the array: ");
        scanf("%d", &num);
          
        printf("%d", n);
          
        for (int j = 0; j < n; j++) 
        {
                if (*(a + j) >= num) 
                {
                        for (int k = n; k > j; k--) 
                        {
                                *(a + k) = *(a + k - 1); 
                        }
                          *(a + j) = num;
                          break; 
                }     
        }

        if (num > *(a + n - 1)) 
                *(a + n) = num;

        printf("\n\nThe element has been added! New array is: \n\n");

        for (int l = 0; l <= n; l++)
                printf("  %d", *(a + l)); 

        printf("\n");

 return 0;
}