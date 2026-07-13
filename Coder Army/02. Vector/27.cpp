#include <bits/stdc++.h>
using namespace std;
int largestSubarraySum(vector<int> &vec){
    int ans = 0;
    for (int i=0; i<vec.size(); i++){
        int currSum = 0;
        for (int j=i; j<vec.size(); j++){
            currSum+=vec[j];
            ans = max(ans, currSum);
        }
    }
    return ans;
}
int main(){
    vector<int> vec = {1, -2, 3, 10, -4, 7, 2, -5};
    cout<<largestSubarraySum(vec);
    return 0;
}