#include <bits/stdc++.h>
using namespace std;
template <size_t Rows, size_t Cols>
pair<int,int> linearSearch(int (&arr)[Rows][Cols], int n){
    for (int i=0;i<Rows;i++) for (int j=0;j<Cols;j++) if (arr[i][j]==n) return {i,j};
    return {-1, -1};
}
int main(){
    int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20},{21,22,23,24}};
    int n;
    cout<<"Enter number: ";
    cin>>n;
    pair<int,int> res = linearSearch(arr, n);
    if (res.first != -1) cout<<res.first<<" "<<res.second;
    else cout<<"Not Found";
    return 0;
}