/* Delete an element in the array program */ 

#include<stdio.h>
//To search the element
int find(int arr[], int n, int key);

// Function to delete element
int delete(int arr[], int n, int key)
{
    //Finding the position of the element
    int position = find(arr, n, key);

    if(position == -1){
        printf("\n Element not found \n");
        return n;
    }
    //Deleting element
    for(int i = position; i < n-1 ; i++)
    arr[i] = arr[i +1];

    return n-1;
} 
// Function for searching the element
int find(int arr[], int n, int key)
{
    for(int i=0 ; i<n ;i++)
      if (arr[i] == key)
        return i;

    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[]={192,55,43,44,92};
    int new;
    int n = sizeof(arr)/sizeof(arr[0]);  // n = index number
    int key;  // element t delete from the array

    
   label: printf("\n Before Deletation \n");

    for(int i=0; i<n; i++)
    printf("%d ", arr[i]);

    printf("\n Enter the element you want to delete from the array\n");
    scanf("%d",&key); 

    n = delete(arr,n,key);

    printf("\n After Deletation \n"); 
    for(int i=0; i<n ; i++)
    printf("%d ", arr[i]);

    printf(" \n\n Do you want to delete more element the press '1' and if not, press '-1' two times \n");
    scanf("%d ",&new);

     if(new==1)
     goto label;  //the program will start again form the the label statement
     else
     printf("Thank you\n");

    return 0;
}