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
vector<int> printMaxColSum (vector<vector<int>> &vec){
    vector<int> res;
    int maxSum = INT_MIN, index = -1;
    for (int i=0; i<vec[0].size(); i++){
        int sum = 0;
        for (int j=0; j<vec.size(); j++){
            sum += vec[j][i];
            if (sum > maxSum){
                maxSum = sum;
                index = i;
            }
        }
    }
    for (int i=0; i<vec.size(); i++) res.push_back(vec[i][index]);
    return res;
}
int main(){
    vector<vector<int>> vec1 = {{2, 4, 6, 8}, {1, 3, 5, 7}, {10, 12, 14, 16}};
    cout<<"Max Column Sum: "<<maxColSum(vec1);
    cout<<"\nMax Column: ";
    vector<int> ans = printMaxColSum(vec1);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}