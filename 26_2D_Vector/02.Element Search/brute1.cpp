#include <bits/stdc++.h>
using namespace std;
bool linearSearch(vector<vector<int>>& arr, int n){
    if (arr.empty() || arr[0].empty()) return false;
    int rows = arr.size();
    int cols = arr[0].size();\
    for (int i=0;i<rows;i++) for (int j=0;j<cols;j++) if (arr[i][j]==n) return true;
    return false;
}
int main(){
    vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int n;
    cout<<"Enter number: ";
    cin>>n;
    (linearSearch(arr,n)) ? cout<<"Found" : cout<<"Not Found";
    return 0;
}