#include <bits/stdc++.h>
using namespace std;
template <size_t Rows, size_t Cols>
bool linearSearch(int (&arr)[Rows][Cols], int n){
    for (int i=0;i<Rows;i++) for (int j=0;j<Cols;j++) if (arr[i][j]==n) return true;
    return false;
}
int main(){
    int arr[][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int n;
    cout<<"Enter number: ";
    cin>>n;
    (linearSearch(arr,n)) ? cout<<"Found" : cout<<"Not Found";
    return 0;
}