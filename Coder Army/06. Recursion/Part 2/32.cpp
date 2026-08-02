#include <bits/stdc++.h>
using namespace std;
int targetSumRepeat(vector<int> &vec, int n, int index, int target){
    if (target == 0) return 1;
    if (index == n || target < 0) return 0;
    int pick = targetSumRepeat(vec, n, index, target - vec[index]);
    int notPick = targetSumRepeat(vec, n, index + 1, target);
    return pick + notPick;
}
int helper(vector<int> &vec, int target){
    return targetSumRepeat(vec, vec.size(), 0, target);
}
int main(){
    vector<int> vec = {1, 2, 3, 4};
    cout<<helper(vec, 4);
    return 0;
}