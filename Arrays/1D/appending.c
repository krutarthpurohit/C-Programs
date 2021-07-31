// Joining the 2 arrays and print the newly formed array
#include <stdio.h>
int main()
{
    int arr[5], brr[5] , srr[10];
    int j,i,l;
    
    for (i=0;i<5;i++)
      scanf("%d",&arr[i]);
    
    for (j=0;j<5;j++)
      scanf("%d",&brr[j]);
    
    printf("OUTPUT \n");
    
    for(l=0;l<5;l++)
    {
     srr[l]=arr[l];
     srr[l+5]=brr[l];
    }
  
    for (l=0;l<10;l++)
    printf("%d \t",srr[l]);
    return 0;    
}