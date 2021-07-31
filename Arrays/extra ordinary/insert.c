/* Insert an element in the array program */ 

#include<stdio.h>
int insert(int arr[], int n, int key, int capacity)
{
    if(n >= capacity)   //cannot insert more elements if n is already more than or equal to capacity
    return n;

    arr[n]=key;  // inserting new element at index number 'n', eg: arr[6]=200

    return (n+1);
}
int main(int argc, char const *argv[])
{
    int arr[20] = {2,1,220,470,5,7};
    int capacity = sizeof(arr) / sizeof(arr[0]);  //capacity = 26/4 = 6 (This is the capacity of the array)
    int n = 6; //n is the index number
    int i, key, new; //i is for loop, key will be used for the new element, new to check if user wants to insert new element again

    //insrting element
   label: printf("Enter the element you want to insert in a row \n");
    scanf("%d",&key);

    printf("\n Before Insertion: ");
    for ( i=0 ; i<n ; i++ )
    printf("%d ",arr[i]);

    n = insert(arr,n,key,capacity);  // calling the function
    printf("\n After Insertion: ");
    for ( i=0 ; i<n ; i++ )
    printf("%d ",arr[i]);    

    printf(" \n\n Do you want to add more element the press '1' and if not, press 'C' two times \n");
    scanf("%d ",&new);

     if(new==1)
     goto label;  //the program will start again form the the label statement
     else
     printf("Thank you\n");   
     
    return 0;
}