#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &vec, int start, int mid, int end){
    vector<int> temp;
    int left=start, right=mid+1;
    while(left<=mid && right<=end){
        if (vec[left]>=vec[right]) temp.push_back(vec[left++]);
        else temp.push_back(vec[right++]);
    }
    while(left<=mid) temp.push_back(vec[left++]);
    while(right<=end) temp.push_back(vec[right++]);
    for (int i=0; i<temp.size(); i++) vec[start+i] = temp[i];
    return;
}
void mSort(vector<int> &vec, int start, int end){
    if (start >= end) return;
    int mid = start+(end-start)/2;
    mSort(vec,start,mid);
    mSort(vec,mid+1,end);
    merge(vec,start,mid,end);
    return;
}
vector<int> mergeSort(vector<int> &vec){
    mSort(vec,0,vec.size()-1);
    return vec;
}
int main(){
    vector<int> vec = {12,31,35,8,32,17};
    vector<int> ans = mergeSort(vec);
    for (int x : ans) cout<<x<<" ";
    return 0;
}