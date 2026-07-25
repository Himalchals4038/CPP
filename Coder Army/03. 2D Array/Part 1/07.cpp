#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> reverseRow(vector<vector<int>> &vec){
    for (int i=0; i<vec.size(); i++){
        reverse(vec[i].begin(), vec[i].end());
    }
    return vec;
}
int main(){
    vector<vector<int>> vec1 = {{1, 2, 3, 11}, {4, 5, 6, 22}, {7, 8, 9, 33}, {10, 11, 12, 44}};
    vector<vector<int>> vec2 = reverseRow(vec1);
    for (int i=0; i<vec2.size(); i++){
        copy(vec2[i].begin(), vec2[i].end(), ostream_iterator<int>(cout, " "));
        cout<<endl;
    }
    return 0;
}