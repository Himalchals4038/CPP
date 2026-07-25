#include <bits/stdc++.h>
using namespace std;
int maxColSum (vector<vector<int>> &vec){
    int maxSum = INT_MIN;
    for (int i=0; i<vec[0].size(); i++){
        int sum = 0;
        for (int j=0; j<vec.size(); j++) sum += vec[j][i];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
int main(){
    vector<vector<int>> vec1 = {{2, 4, 6, 8}, {1, 3, 5, 7}, {10, 12, 14, 16}};
    cout<<"Max Column Sum: "<<maxColSum(vec1);
    return 0;
}