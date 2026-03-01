#include <bits/stdc++.h>
using namespace std;
template <size_t Rows, size_t Cols>
pair<int, int> binarySearch(int (&arr)[Rows][Cols], int n){
    int low = 0, high = Rows * Cols - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        int val = arr[mid / Cols][mid % Cols];
        if (val == n) return {mid / Cols, mid % Cols};
        if (val < n) low = mid + 1;
        else high = mid - 1;
    }
    return {-1, -1};
}
int main(){
    int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20},{21,22,23,24}};
    int n;
    cout<<"Enter number: ";
    cin>>n;
    pair<int, int> res = binarySearch(arr, n);
    if (res.first != -1) cout << res.first << " " << res.second;
    else cout<<"Not Found";
    return 0;
}