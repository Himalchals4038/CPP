#include <bits/stdc++.h>
using namespace std;
int pos(int *arr, int length, int target){
    int low = 0;
    int high = length - 1;
    while (low <= high){
        int mid = low + (high - low)/2;
        if (arr[mid] == target) return mid;
        if (arr[low] <= arr[mid]){
            if (target >= arr[low] && target < arr[mid]) high = mid - 1;
            else low = mid + 1;
        }
        else{
            if (target > arr[mid] && target <= arr[high]) low = mid + 1;
            else high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {3, 4, 5, 6, 7, 0, 1, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n;
    cout<<"Enter element to search: ";
    cin>>n;
    cout<<"Index: "<<pos(arr, size, n)<<endl;
    return 0;
}