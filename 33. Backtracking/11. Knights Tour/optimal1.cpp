#include <bits/stdc++.h>
using namespace std;
bool kTour(vector<vector<int>> &vec, int i, int j, int count){
    if (count==vec.size()*vec.size()) return true;
    vector<pair<int,int>> moves = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
    for (auto move : moves){
        int x = i+move.first, y = j+move.second;
        if (x>=0 && x<vec.size() && y>=0 && y<vec.size() && vec[x][y]==0){
            vec[x][y] = count+1;
            if (kTour(vec,x,y,count+1)) return true;
            vec[x][y] = 0;
        }
    }
    return false;
}
bool knightsTour(vector<vector<int>> &vec){
    return kTour(vec,0,0,1);
}
int main(){
    // vector<vector<int>> vec = {{0,3,6},{5,8,1},{2,7,4}};
    vector<vector<int>> vec = {{0,11,16,5,20},{17,4,19,10,15},{12,1,8,21,6},{3,18,23,14,9},{24,13,2,7,22}};
    (knightsTour(vec)) ? cout<<"Is Possible" : cout<<"Not Possible";
    return 0;
}