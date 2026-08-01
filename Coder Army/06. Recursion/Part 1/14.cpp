#include <bits/stdc++.h>
using namespace std;
int binarySearch (vector<int> &vec, int key, int low, int high){
    if (low>high) return -1;
    int mid = high + (low-high)/2;
    if (vec[mid]==key) return mid;
    if (vec[mid]>key) return binarySearch(vec, key, low, mid-1);
    return binarySearch(vec, key, mid+1, high);
}
int helper1(vector<int> &vec, int key){
    sort(vec.begin(), vec.end());
    return binarySearch(vec, key, 0, vec.size()-1);
}

int reverseBinarySearch (vector<int> &vec, int key, int low, int high){
    if (low>high) return -1;
    int mid = high + (low-high)/2;
    if (vec[mid]==key) return mid;
    if (vec[mid]>key) return reverseBinarySearch(vec, key, mid+1, high);
    return reverseBinarySearch(vec, key, low, mid-1);
}
int helper2(vector<int> &vec, int key){
    sort(vec.begin(), vec.end(), greater<int>());
    return reverseBinarySearch(vec, key, 0, vec.size()-1);
}

int main(){
    vector<int> vec = {36, 15, 49, 20, 73, 81, 55, 64, 23, 75, 10};
    cout<<helper1(vec, 64)<<endl;
    cout<<helper2(vec, 64)<<endl;
    return 0;
}