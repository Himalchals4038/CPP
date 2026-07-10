#include <bits/stdc++.h>
using namespace std;
template <size_t Rows, size_t Cols>
int mcs(int (&arr)[Rows][Cols]){
    int res = INT_MIN;
    for (int i=0;i<Cols;i++){
        int sum = 0;
        for (int j=0;j<Rows;j++) sum += arr[j][i];
        res = max(res, sum);
    }
    return res;
}
int main(){
    int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20},{21,22,23,24}};
    cout<<"Max column sum: "<<mcs(arr);
    return 0;
}