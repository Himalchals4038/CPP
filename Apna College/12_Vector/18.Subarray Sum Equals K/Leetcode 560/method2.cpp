#include <bits/stdc++.h>
using namespace std;
int subArray (vector<int> &vec, int n){
    int count = 0;
    long long prefixSum = 0;
    unordered_map<long long, int> mpp;
    mpp[0] = 1;
    mpp.reserve(vec.size());
    for (int i=0;i<vec.size();i++){
        prefixSum += vec[i];
        long long remove = prefixSum - n;
        if (mpp.find(remove) != mpp.end()) count += mpp[remove];
        mpp[prefixSum]++;
    }
    return count;
}
int main(){
    vector<int> vec = {9,4,20,3,10,5,12,10};
    int n;
    cout<<"Enter Target: ";
    cin>>n;
    cout<<"No. of Sub Arrays: "<<subArray(vec,n);
    return 0;
}