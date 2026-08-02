#include <bits/stdc++.h>
using namespace std;
void perfectSum(vector<int> &vec, int n, int index, int target, int &count){
    if (index == n){
        if (target == 0) count++;
        return;
    }
    if (target < 0) return;
    perfectSum(vec, n, index + 1, target, count);
    perfectSum(vec, n, index + 1, target - vec[index], count);
}
int helper(vector<int> &vec, int target){
    int count = 0;
    perfectSum(vec, vec.size(), 0, target, count);
    return count;
}
int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    cout<<"Sum Count: "<<helper(vec, 6)<<"\n";
    return 0;
}