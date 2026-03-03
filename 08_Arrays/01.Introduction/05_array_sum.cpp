#include<iostream>
using namespace std;
int sum(int arr[]){
    int sum=0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[5] = {74, 11, 33, 65, 98};
    int sum=0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len;i++){
        sum+=arr[i];
    }
    cout<<"Sum of all elements in array: "<<sum;
    // cout<<"Sum of all elements in array: "<<sum(arr);
    return 0;
}