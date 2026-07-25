#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> divideSubarraySum(vector<int> &vec, int sum){
    vector<vector<int>> ans;
    int n = vec.size();
    for (int i=0; i<n; i++){
        int currSum = 0;
        for (int j=i; j<n; j++){
            if (currSum + vec[j] == sum){
                vector<int> temp;
                for (int k=i; k<=j; k++) temp.push_back(vec[k]);
                ans.push_back(temp);
            }
            currSum += vec[j];
        }
    }
    if (ans.size() > 0) return ans;
    return {};
}
int main(){
    
    return 0;
}