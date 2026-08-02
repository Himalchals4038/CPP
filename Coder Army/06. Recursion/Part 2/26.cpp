#include <bits/stdc++.h>
using namespace std;
bool targetSum(vector<int> &vec, int n, int index, int sum, int target){
    if(index == n) return sum == target;
    bool pick = targetSum(vec, n, index + 1, sum + vec[index], target);
    bool dont_pick = targetSum(vec, n, index + 1, sum, target);
    return pick || dont_pick;
}
bool helper(vector<int> &vec, int target){
    return targetSum(vec, vec.size(), 0, 0, target);
}
int main(){
    vector<int> vec = {1, 2, 3};
    cout<<"Answer: "<<(helper(vec, 6) ? "Possible" : "Not Possible")<<"\n";
    return 0;
}