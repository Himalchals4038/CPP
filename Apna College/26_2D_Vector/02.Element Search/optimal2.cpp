#include <bits/stdc++.h>
using namespace std;
bool binarySearch(vector<vector<int>>& arr, int n){
    if (arr.empty() || arr[0].empty()) return false;
    int rows = arr.size();
    int cols = arr[0].size();
    int targetRow = -1;
    int low = 0, high = rows-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if (arr[mid][0]<=n && arr[mid][cols-1]>=n) targetRow = mid;
        if (arr[mid][0]>n) high = mid-1;
        else low = mid+1;
    }
    if (targetRow==-1) return false;
    low = 0, high = cols-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if (arr[targetRow][mid]==n) return true;
        if (arr[targetRow][mid]<n) low = mid+1;
        else high = mid-1;
    }
    return false;
}
int main(){
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20},{21,22,23,24}};
    int n;
    cout<<"Enter number: ";
    cin>>n;
    (binarySearch(arr, n)) ? cout<<"Found" : cout<<"Not Found";
    return 0;
}