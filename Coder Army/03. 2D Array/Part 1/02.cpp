#include <bits/stdc++.h>
using namespace std;
int maxRowSum (vector<vector<int>> &vec){
    int maxSum = INT_MIN;
    for (int i=0; i<vec.size(); i++){
        int sum = 0;
        for (int j=0; j<vec[i].size(); j++) sum += vec[i][j];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
int main(){
    vector<vector<int>> vec1 = {{2, 4, 6, 8}, {1, 3, 5, 7}, {10, 12, 14, 16}};
    cout<<"Max Row Sum: "<<maxRowSum(vec1);
    return 0;
}