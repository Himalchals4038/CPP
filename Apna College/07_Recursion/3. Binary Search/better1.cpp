#include <bits/stdc++.h>
using namespace std;
template <typename T>
int binSearch(vector<T> &vec, T n, int start, int end){
    if (start>end) return -1;
    int mid = start+(end-start)/2;
    if (vec[mid]==n) return mid;
    else if (vec[mid]>n) return binSearch(vec, n, start, mid-1);
    else return binSearch(vec, n, mid+1, end);
}
template <typename T>
int binSearch(vector<T> &vec, T n){
    return binSearch(vec, n, 0, vec.size()-1);
}
int main(){
    vector<int> vec = {-1,0,3,5,9,12};
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if (binSearch(vec, n) == -1) cout<<"Not Found";
    else cout<<"Found at index: "<<binSearch(vec, n);
    return 0;
}