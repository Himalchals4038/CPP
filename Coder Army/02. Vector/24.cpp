#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> divideSubarraySum(vector<int> &vec, int sum){
    vector<vector<int>> ans;
    int n = vec.size();
    for (int i=0; i<n; i++){
        int currentSum = 0;
        vector<int> temp;
        for (int j=i; j<n; j++){
            currentSum += vec[j];
            temp.push_back(vec[j]);
            if (currentSum == sum) ans.push_back(temp);
        }
    }
    return ans;
}
int main(){
    vector<int> vec1 = {1, 2, 3, 4, 5, -2, 4};
    int targetSum = 7;
    vector<vector<int>> result = divideSubarraySum(vec1, targetSum);
    cout<<"Subarrays with sum "<<targetSum<<":"<<endl;
    for (const auto& subarray : result){
        for (int num : subarray){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}