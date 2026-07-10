#include <bits/stdc++.h>
using namespace std;
vector<int> findErrorNums(const vector<vector<int>> &grid){
    long long n = grid.size(), N = n * n;

    long long expectedSum = N * (N + 1) / 2;
    long long expectedSumSq = N * (N + 1) * (2 * N + 1) / 6;
    long long actualSum = 0, actualSumSq = 0;

    for(const auto& row : grid){
        for (int val : row){
            actualSum += val;
            actualSumSq += (long long)val * val;
        }
    }

    long long diff = actualSum - expectedSum;
    long long sum = (actualSumSq - expectedSumSq) / diff;

    int repeated = (sum + diff) / 2;
    int missing = sum - repeated;
    
    return {repeated, missing};
}
int main(){
    vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> ans = findErrorNums(grid);
    copy(ans.begin(),ans.end(),ostream_iterator<int>(cout," "));
    return 0;
}