#include <bits/stdc++.h>
using namespace std;
int diagonalSum(vector<vector<int>> &vec){
    int sum = 0;
    for (int i=0; i<vec.size(); i++) sum += vec[i][i];
    return sum;
}
int reverseDiagonalSum(vector<vector<int>> &vec){
    int sum = 0;
    for (int i=0; i<vec.size(); i++) sum += vec[i][vec.size()-i-1];
    return sum;
}
int main(){
    
    return 0;
}