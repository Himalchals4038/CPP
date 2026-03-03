#include<iostream>
using namespace std;

int main()
{
    int arr[5]; //array declaration
    for (int i=0;i<5;i++){
        cout<<"Enter "<<i<<"th element: ";
        cin>>arr[i];
    }
    arr[3] = 49; //array element updation
    cout<<"Array: ";
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}