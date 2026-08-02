#include <bits/stdc++.h>
using namespace std;
bool targetSum(vector<int> &vec, int n, int index, int target){
    if (target == 0) return true;
    if (index == n || target<0) return false;
    bool pick = targetSum(vec, n, index + 1, target);
    bool dont_pick = targetSum(vec, n, index + 1, target - vec[index]);
    return pick || dont_pick;
}
bool helper(vector<int> &vec, int target){
    return targetSum(vec, vec.size(), 0, target);
}
int main(){
    vector<int> vec = {1, 2, 3};
    cout<<"Answer: "<<(helper(vec, 16) ? "Possible" : "Not Possible")<<"\n";
    return 0;
}