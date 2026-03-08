#include <bits/stdc++.h>
using namespace std;
int binSearch(vector<int> &vec, int n, int start, int end){
    if (start>end) return -1;
    int mid = start+(end-start)/2;
    if (vec[mid]==n) return mid;
    else if (vec[mid]>n) return binSearch(vec, n, start, mid-1);
    else return binSearch(vec, n, mid+1, end);
}
int search(vector<int> &vec, int n){
    return binSearch(vec, n, 0, vec.size()-1);
}
int main(){
    vector<int> vec = {-1,0,3,5,9,12};
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if (search(vec, n) == -1) cout<<"Not Found";
    else cout<<"Found at index: "<<search(vec, n);
    return 0;
}