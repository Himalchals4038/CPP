#include <bits/stdc++.h>
using namespace std;
int findPages(int arr[], int n, int m){
    if (n<m) return -1;
    int start = *max_element(arr, arr+n);
    int end = accumulate(arr, arr+n, 0);
    while (start<=end){
        int mid = start + (end-start)/2;
        int sum = 0, students = 1;
        for (int i=0; i<n; i++){
            if (sum+arr[i]>mid){
                students++;
                sum = arr[i];
                if (students>m) return -1;
            }
            else sum += arr[i];
        }
        if (students<=m) end = mid-1;
        else start = mid+1;
    }
    return start;
}
int main(){
    
    return 0;
}