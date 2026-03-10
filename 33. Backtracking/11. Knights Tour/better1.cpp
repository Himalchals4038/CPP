#include <bits/stdc++.h>
using namespace std;
bool knightsTour(vector<vector<int>> &vec){
    int n = vec.size();
    vector<pair<int, int>> pos(n*n);

    // Store the coordinates of each number in the tour
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j) pos[vec[i][j]] = {i,j};
    }

    // Check if every consecutive number is a valid knight's move away
    for (int i=0; i<n*n-1; ++i){
        int r1 = pos[i].first;
        int c1 = pos[i].second;
        int r2 = pos[i+1].first;
        int c2 = pos[i+1].second;

        int dr = abs(r1-r2);
        int dc = abs(c1-c2);

        // A valid knight move is 2 squares in one direction and 1 in the other
        if (!((dr==1 && dc==2) || (dr==2 && dc==1))) return false;
    }
    return true;
}
int main(){
    vector<vector<int>> vec = {{0,11,16,5,20},{17,4,19,10,15},{12,1,8,21,6},{3,18,23,14,9},{24,13,2,7,22}};
    (knightsTour(vec)) ? cout<<"Is Possible" : cout<<"Not Possible";
    return 0;
}