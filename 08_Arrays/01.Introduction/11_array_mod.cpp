#include<iostream>
using namespace std;

int main()
{
    int arr[]={5,4,9,2,3,11,23,7,18,20};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len;i+=2){
        arr[i]*=2;
    }
    for (int i=1;i<len;i+=2){
        arr[i]+=10;
    }
    for (int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}