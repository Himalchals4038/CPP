#include <bits/stdc++.h>
using namespace std;
bool kTour(vector<vector<int>> &vec, int i, int j, int count){
    int n = vec.size();
    if (count == n*n) return true;
    // Move 1: (2,1)
    if (i+2<n && j+1<n && vec[i+2][j+1] == 0){
        vec[i+2][j+1] = count+1;
        if (kTour(vec, i+2, j+1, count+1)) return true;
        vec[i+2][j+1] = 0;
    }
    // Move 2: (2,-1)
    if (i+2<n && j-1>=0 && vec[i+2][j-1] == 0){
        vec[i+2][j-1] = count+1;
        if (kTour(vec, i+2, j-1, count+1)) return true;
        vec[i+2][j-1] = 0;
    }
    // Move 3: (-2,1)
    if (i-2>=0 && j+1<n && vec[i-2][j+1] == 0){
        vec[i-2][j+1] = count+1;
        if (kTour(vec, i-2, j+1, count+1)) return true;
        vec[i-2][j+1] = 0;
    }
    // Move 4: (-2,-1)
    if (i-2>=0 && j-1>=0 && vec[i-2][j-1] == 0){
        vec[i-2][j-1] = count+1;
        if (kTour(vec, i-2, j-1, count+1)) return true;
        vec[i-2][j-1] = 0;
    }
    // Move 5: (1,2)
    if (i+1<n && j+2<n && vec[i+1][j+2] == 0){
        vec[i+1][j+2] = count+1;
        if (kTour(vec, i+1, j+2, count+1)) return true;
        vec[i+1][j+2] = 0;
    }
    // Move 6: (1,-2)
    if (i+1<n && j-2>=0 && vec[i+1][j-2] == 0){
        vec[i+1][j-2] = count+1;
        if (kTour(vec, i+1, j-2, count+1)) return true;
        vec[i+1][j-2] = 0;
    }
    // Move 7: (-1,2)
    if (i-1>=0 && j+2<n && vec[i-1][j+2] == 0){
        vec[i-1][j+2] = count+1;
        if (kTour(vec, i-1, j+2, count+1)) return true;
        vec[i-1][j+2] = 0;
    }
    // Move 8: (-1,-2)
    if (i-1>=0 && j-2>=0 && vec[i-1][j-2] == 0){
        vec[i-1][j-2] = count+1;
        if (kTour(vec, i-1, j-2, count+1)) return true;
        vec[i-1][j-2] = 0;
    }
    return false;
}
bool knightsTour(vector<vector<int>> &vec){
    vec[0][0] = 1;
    return kTour(vec,0,0,1);
}
int main(){
    int n = 5; // Board size
    vector<vector<int>> vec(n, vector<int>(n, 0));

    if (knightsTour(vec)) {
        cout << "Tour is possible:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << setw(3) << vec[i][j];
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists" << endl;
    }
    return 0;
}