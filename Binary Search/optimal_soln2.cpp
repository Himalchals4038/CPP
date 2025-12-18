#include <bits/stdc++.h>
using namespace std;
vector<int> sorting(int* arr, int size){
    vector<int> vec(arr, arr + size);
    sort(vec.begin(), vec.end());
    return vec;
}
int pos(int *arr, int size, int n){
    sort(arr,arr+size);
    int a = 0;
    long long mid = 0;
    while(a<=size){
        mid = a + (size-a)/2; //prevent integer overflow
        if (arr[mid]==n) return mid;
        else if (arr[mid]<n) a = mid+1;
        else size = mid-1;
    }
    return mid;
}
int main(){
    int arr[] = {18, 26, 35, 49, 72, 16, 82, 46, 55, 37, 96, 80};
    int size = sizeof(arr) / sizeof(arr[0])-1, n;
    cout<<"Enter no: ";
    cin>>n;
    cout<<"Sorted array: ";
    for (int i=0;i<size;i++) cout<<sorting(arr,size)[i]<<" ";
    cout<<endl<<"Position: "<<pos(arr, size, n)<<endl;
    return 0;
}