#include<iostream>
using namespace std;

int main()
{
    int* arr = new int[5]; //dynamically allocated array
    arr[0]=15;
    arr[2]=63;
    arr[4]=27;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl; //Unallocated array spaces will return garbage values 
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl; //Garbage value
    cout<<arr[4]<<endl;
    return 0;
}