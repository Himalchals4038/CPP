#include<iostream>
using namespace std;
void swap1(int& x, int& y){
    x = x+y;
    y = x-y;
    x = x-y;
}
int main(){
    // int arr[]={5,4,9,2,3,11,23,7,18,20};
    int arr[]={5,4,9,2,3,11,23,7,18};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len/2;i++){
        swap1(arr[i],arr[len-i-1]);
    }
    for (int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}