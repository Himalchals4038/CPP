#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,9,2,3,11,23,7,18,20};
    int len = sizeof(arr)/sizeof(arr[0]);
    int a=0,b=0;
    for (int i=0;i<len;i+=2){
        a+=arr[i];
    }
    for (int i=1;i<len;i+=2){
        b+=arr[i];
    }
    cout<<a-b;
    return 0;
}