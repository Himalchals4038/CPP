#include <iostream>
#include <algorithm>
using namespace std;
// Secondary Diagonal Sum
template <size_t Rows, size_t Cols>
int sds(int (&arr)[Rows][Cols]){
    int res = 0;
    for (int i=0;i<min(Rows,Cols);i++) res += arr[i][Cols-1-i];
    return res;
}
int main(){
    int arr[][5] = {{1,2,3,4,20},{5,6,7,8,21},{9,10,11,12,22},{13,14,15,16,23},{17,18,19,20,24}};
    cout<<"Secondary Diagonal Sum: "<<sds(arr);
    return 0;
}