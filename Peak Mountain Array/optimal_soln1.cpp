#include <bits/stdc++.h>
using namespace std;
int peakInd(vector<int> &arr){
    int start = 0;
    int end = arr.size()-1;
    while (start < end){
        int mid = start + (end-start)/2;
        if (arr[mid] < arr[mid+1]) start = mid+1;
        else end = mid;
    }
    return start;
}
int bin(vector<int> &arr, int target, int start, int end){
    while (start <= end){
        int mid = start + (end-start)/2;
        if (arr[mid] == target) return mid;
        if (arr[start] < arr[end]){
            if (target < arr[mid]) end = mid-1;
            else start = mid+1;
        }
        else{
            if (target > arr[mid]) end = mid-1;
            else start = mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,3,5,7,6,4,2,0};
    int target;
    cout<<"Enter element to search: ";
    cin>>target;
    int peak = peakInd(arr);
    int result = bin(arr,target,0,peak);
    if (result == -1) result = bin(arr,target,peak+1,arr.size()-1);
    cout<<"Index: "<<result<<endl;
    return 0;
}