#include <bits/stdc++.h>
using namespace std;
void transpose(vector<vector<int>> &vec){
    if (vec.empty()) return;
    int n = vec.size();
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            swap(vec[i][j], vec[j][i]);
        }
    }
}
int main(){
    vector<vector<int>> vec1 = {{1, 3, 5, 7}, {2, 4, 6, 8}, {9, 11, 13, 15}, {10, 12, 14, 16}};
    transpose(vec1);
    for (int i=0; i<vec1.size(); i++){
        copy(vec1[i].begin(), vec1[i].end(), ostream_iterator<int>(cout, " "));
        cout<<"\n";
    }
    return 0;
}