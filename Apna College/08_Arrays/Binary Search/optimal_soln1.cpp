#include <bits/stdc++.h>
using namespace std;
int pos(int *arr, int size, int n){
    sort(arr,arr+size);
    int a = 0;
    int mid = 0;
    while(a<=size){
        mid = (a+size)/2;
        if (arr[mid]==n) return mid;
        else if (arr[mid]<n) a = mid+1;
        else size = mid-1;
    }
    return mid;
}
int main(){
    int arr[] = {18, 26, 35, 49, 72, 16, 82, 46, 55, 37, 96, 80};
    int size = sizeof(arr) / sizeof(arr[0])-1;
    int n;
    cout<<"Enter no: ";
    cin>>n;
    cout<<"Position: "<<pos(arr, size, n)<<endl;
    return 0;
}