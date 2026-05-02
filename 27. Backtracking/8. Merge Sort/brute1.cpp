#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &vec, int low, int mid, int high){
    vector<int> temp;
    int left = low, right = mid+1;
    while (left <= mid && right <= high) {
        if (vec[left] <= vec[right]) temp.push_back(vec[left++]);
        else temp.push_back(vec[right++]);
    }
    while (left <= mid) temp.push_back(vec[left++]);
    while (right <= high) temp.push_back(vec[right++]);
    for (int i=0; i<temp.size(); i++) {
        vec[low+i] = temp[i];
    }
}
void mergeSortHelper(vector<int> &vec, int low, int high) {
    if (low >= high) return;
    int mid = low+(high-low)/2;
    mergeSortHelper(vec, low, mid);
    mergeSortHelper(vec, mid+1, high);
    merge(vec, low, mid, high);
}
vector<int> mergeSort(vector<int> &vec){
    if (!vec.empty()) mergeSortHelper(vec, 0, vec.size()-1);
    return vec;
}
int main(){
    vector<int> vec = {12,31,35,8,32,17};
    vector<int> ans = mergeSort(vec);
    for (int x : ans) cout<<x<<" ";
    return 0;
}