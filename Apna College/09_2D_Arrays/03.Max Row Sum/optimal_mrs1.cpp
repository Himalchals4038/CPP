#include <iostream>
#include <climits>
#include <algorithm>
#include <numeric>
using namespace std;
template <size_t Rows, size_t Cols>
int mrs(int (&arr)[Rows][Cols]){
    int res = INT_MIN;
    for (int i=0;i<Rows;i++){
        int sum = accumulate(arr[i], arr[i]+Cols, 0);
        res = max(res, sum);
    }
    return res;
}
int main(){
    int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20},{21,22,23,24}};
    cout<<"Max row sum: "<<mrs(arr);
    return 0;
}