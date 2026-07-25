#include <bits/stdc++.h>
using namespace std;

//Row Major Order

//vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
//Flattened Index = row_index*col_total + col_index
//arr[row_index][col_index] = arr[row_index*col_total + col_index]

//Row Index = Flat_Index/col_total;
//Col Index = Flat_Index%col_total;

//arr[element] = base_address + index*element_size
//arr[i][j] = base_address + (i*col_total + j)*element_size
int main(){
    int arr1[3][4] = {{2, 4, 6, 8}, {1, 3, 5, 7}, {10, 12, 14, 16}}; //3*4 Matrix
    int arr2[][4] = {{2, 4, 6, 8}, {1, 3, 5, 7}, {10, 12, 14, 16}, {9, 11, 13, 15}}; //4*4 Matrix
    vector<vector<int>> vec1 = {{2, 4, 6, 8}, {1, 3, 5, 7}, {10, 12, 14, 16}, {9, 11, 13, 15}}; //4*4 Matrix

    vector<vector<int>> vec2(5, vector<int>(5, 0)); //5*5 Matrix Initialized with 0
    for(int i=0; i<5; i++){
        copy(vec2[i].begin(), vec2[i].end(), ostream_iterator<int>(cout, " "));
        cout<<endl;
    }
    return 0;
}