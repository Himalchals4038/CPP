#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    cout<<"No. of rows: "<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"No. of columns: "<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;
    return 0;
}