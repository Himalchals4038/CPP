#include <bits/stdc++.h>
using namespace std;
set<int> twoSum(vector<int> &vec, int target){
    set<int> result;
    unordered_set<int> seen;
    for (int curr : vec){
        int comp = target - curr;
        if (seen.count(comp)){
            result.insert(curr);
            result.insert(comp);
            return result;
        }
        seen.insert(curr);
    }
    return result;
}
int main(){
    vector<int> vec1 = {2, 7, 11, 15, 1, 4, 3, 6};
    int n = 9;
    set<int> res = twoSum(vec1, n);
    for (int x : res) cout<<x<<" ";
    return 0;
}