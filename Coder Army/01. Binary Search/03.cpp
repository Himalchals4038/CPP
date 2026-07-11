#include <bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int> &vec, int k){
    int start=0, end=vec.size()-1, ans=vec.size();
    while(start<=end){
        int mid = start+(end-start)/2;
        if (vec[mid]-mid-1>=k){
            ans = mid;
            end = mid-1;
        }
        else start = mid+1;
    }
    return ans+k;
}
int main(){
    
    return 0;
}