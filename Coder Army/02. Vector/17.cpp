#include <bits/stdc++.h>
using namespace std;
vector<set<int>> twoSum(vector<int> &vec, int target){
    vector<set<int>> all_pairs;
    sort(vec.begin(), vec.end());
    int left = 0, right = vec.size()-1;
    while (left<right){
        int sum = vec[left]+vec[right];
        if (sum == target){
            all_pairs.push_back({vec[left], vec[right]});
            left++;
            right--;
        }
        else if (sum<target) left++;
        else right--;
    }
    return all_pairs;
}
int main(){
    vector<int> vec1 = {2, 7, 11, 15, 1, 4, 3, 6};
    int n = 9;
    vector<set<int>> res = twoSum(vec1, n);
    for (const auto& pair_set : res){
        cout<<"Pair: ";
        for (int x : pair_set) cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}