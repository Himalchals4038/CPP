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
vector<int> printMaxRowSum (vector<vector<int>> &vec){
    vector<int> ans;
    int maxSum = INT_MIN, index = -1;
    for (int i=0; i<vec.size(); i++){
        int sum = 0;
        for (int j=0; j<vec[i].size(); j++){
            sum += vec[i][j];
            if (sum > maxSum){
                maxSum = sum;
                index = i;
            }
        }
    }
    for (int i=0; i<vec[index].size(); i++) ans.push_back(vec[index][i]);
    return ans;
}
int main(){
    vector<vector<int>> vec1 = {{2, 4, 6, 8}, {1, 3, 5, 7}, {10, 12, 14, 16}};
    cout<<"Max Row Sum: "<<maxRowSum(vec1);
    cout<<"\nMax Row: ";
    vector<int> ans = printMaxRowSum(vec1);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}