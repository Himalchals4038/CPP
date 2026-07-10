#include <bits/stdc++.h>
using namespace std;
int subArray (vector<int> &vec, int n){
    int freq = 0;
    long long prefixSum = 0;
    vector<long long> prefix;
    for (int i=0;i<vec.size();i++){
        prefixSum += vec[i];
        prefix.push_back(prefixSum);
    }
    for (int i=0;i<prefix.size();i++){
        if (prefix[i] == n) freq++;
        long long remove = prefix[i]-n;
        freq += count(prefix.begin(), prefix.begin()+i, remove);
    }
    return freq;
}
int main(){
    vector<int> vec = {9,4,20,3,10,5,12,10};
    int n;
    cout<<"Enter Target: ";
    cin>>n;
    cout<<"No. of Sub Arrays: "<<subArray(vec,n);
    return 0;
}