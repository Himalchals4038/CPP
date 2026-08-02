#include <bits/stdc++.h>
using namespace std;
/**
 * @brief Recursively finds all subset sums using a backtracking approach.
 * @param vec The input vector of numbers.
 * @param n The size of the vector.
 * @param index The current index being considered.
 * @param sum The sum of the subset built so far.
 * @param ans The vector to store all the resulting subset sums.
 */
void findSubsetSums(vector<int> &vec, int n, int index, int sum, vector<int> &ans){
    if(index == n){
        ans.push_back(sum);
        return;
    }
    findSubsetSums(vec, n, index + 1, sum + vec[index], ans);
    findSubsetSums(vec, n, index + 1, sum, ans);
}
int main(){
    vector<int> vec = {1, 2, 3};
    vector<int> ans;
    findSubsetSums(vec, vec.size(), 0, 0, ans);
    sort(ans.begin(), ans.end());
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}