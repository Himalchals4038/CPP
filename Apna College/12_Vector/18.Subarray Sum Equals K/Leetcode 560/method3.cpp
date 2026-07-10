#include <bits/stdc++.h>
using namespace std;
int subArray (vector<int> &vec, int n){
    int count = 0;
    if (vec.empty()) return 0;
    vector<long long> prefixSum (vec.size(),0);
    prefixSum[0] = vec[0];
    for (int i=1;i<vec.size();i++) prefixSum[i] = prefixSum[i-1] + vec[i];
    
    unordered_map<long long, int> mpp;
    for (int i=0;i<vec.size();i++){
        if (prefixSum[i] == n) count++;
        long long val = prefixSum[i] - n;
        if (mpp.find(val) != mpp.end()) count += mpp[val];
        mpp[prefixSum[i]]++;
    }
    return count;
}
int main(){
    // vector<int> vec = {9,4,20,3,10,5,12,10};
    vector<int> vec = {1,1,1};
    int n;
    cout<<"Enter Target: ";
    cin>>n;
    cout<<"No. of Sub Arrays: "<<subArray(vec,n);
    return 0;
}