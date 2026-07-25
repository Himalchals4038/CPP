#include <bits/stdc++.h>
using namespace std;
vector<int> linearSearch(vector<vector<int>> &vec, int target){
    int row = vec.size();
    int col = vec[0].size();
    vector<int> ans(2, -1);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(vec[i][j] == target){
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> vec = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> res = linearSearch(vec, 11);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    return 0;
}