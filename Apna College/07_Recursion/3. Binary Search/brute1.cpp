#include <bits/stdc++.h>
using namespace std;
int binSearch(vector<int> &vec, int n, int start, int end){
    if (start>end) return -1;
    int mid = start+(end-start)/2;
    if (vec[mid]==n) return mid;
    else if (vec[mid]>n) return binSearch(vec, n, start, mid-1);
    else return binSearch(vec, n, mid+1, end);
}
int main(){
    vector<int> vec = {-1,0,3,5,9,12};
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if (binSearch(vec, n, 0, vec.size()-1) == -1) cout<<"Not Found";
    else cout<<"Found at index: "<<binSearch(vec, n, 0, vec.size()-1);
    return 0;
}