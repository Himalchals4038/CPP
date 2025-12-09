#include<iostream>
using namespace std;

int main()
{
    int arr[] = {7, 5, 4, 2, 8, 6, 3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int arr1[7];
    for (int i=0;i<len;i++){
        arr1[i]=arr[len-i-1];
        cout<<arr1[i]<<" ";
    }
    return 0;
}