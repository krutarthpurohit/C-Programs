/* Inserting the values in array and printing the values */

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter Size"<<endl;
    cin>>n;
    int A[5];

    for (int i=1; i<5; i++ )         //loop to insert the values in the array
       cin>>A[i];

    cout<<"This are the stored values in an array";
     for (int i=1; i<=5; i++ )      //loop to display the values stored in the array
       cout<<A[i]<<endl;


    return 0;
}