#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> rotate90Clockwise(vector<vector<int>> &vec){
    vector<vector<int>> res(vec[0].size(), vector<int>(vec.size()));
    int rows = vec.size();
    int cols = vec[0].size();
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            res[j][rows-1-i] = vec[i][j];
        }
    }
    return res;
}
int main(){
    vector<vector<int>> vec1 = {{1, 3, 5, 7}, {2, 4, 6, 8}, {9, 11, 13, 15}, {10, 12, 14, 16}};
    cout<<"Original Matrix:\n";
    for (int i=0; i<vec1.size(); i++){
        copy(vec1[i].begin(), vec1[i].end(), ostream_iterator<int>(cout, " "));
        cout<<"\n";
    }
    cout<<"\n";
    vector<vector<int>> res = rotate90Clockwise(vec1);
    cout<<"Rotated Matrix:\n";
    for (int i=0; i<res.size(); i++){
        copy(res[i].begin(), res[i].end(), ostream_iterator<int>(cout, " "));
        cout<<"\n";
    }
    return 0;
}