#include <bits/stdc++.h>
using namespace std;
bool binarySearch(vector<vector<int>>& arr, int n){
    if (arr.empty() || arr[0].empty()) return false;
    int rows = arr.size();
    int cols = arr[0].size();
    int i = 0, j = cols - 1;
    while(i < rows && j >= 0){
        if (arr[i][j] == n) return true;
        else if (arr[i][j] > n) j--;
        else i++;
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