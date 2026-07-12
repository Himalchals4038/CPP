#include <bits/stdc++.h>
using namespace std;
int koko(int arr[], int n, int h){
    int start = 1, end = *max_element(arr, arr+n);
    int ans = end, mid;
    while (start<=end){
        mid = start + (end-start)/2;
        long long totalHours = 0;
        for (int i=0; i<n; i++) totalHours += (arr[i]+mid-1)/mid;
        if (totalHours <= h){
            ans = mid;
            end = mid-1;
        }
        else start = mid+1;
    }
    return ans;
}
int main(){
    int arr1[] = {3, 6, 11, 7};
    int h = 8;
    cout<<koko(arr1, sizeof(arr1)/sizeof(arr1[0]), h);
    return 0;
}