#include <bits/stdc++.h>
using namespace std;
int solve(int n, int k, vector<int> &stalls){
    sort(stalls.begin(), stalls.end());
    int left = 0, right = stalls[n-1] - stalls[0];
    while(left<right){
        int mid = (left+right+1)/2;
        int count = 1;
        int prev = stalls[0];
        for (int i=1; i<n; i++){
            if (stalls[i]-prev >= mid){
                count++;
                prev = stalls[i];
            }
        }
        if (count >= k) left = mid;
        else right = mid-1;
    }
    return left;
}
int main(){
    
    return 0;
}