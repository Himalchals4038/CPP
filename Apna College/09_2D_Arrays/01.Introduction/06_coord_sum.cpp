#include<iostream>
using namespace std;

int main(){
    int arr[][5] = {{1,2,3,4,5},{6,7,8,9,1},{2,3,4,5,6},{7,8,9,1,2},{3,4,5,6,7}};
    int a,b,c,d;
    cout<<"Enter coordinates of first point: ";
    cin>>a>>b;
    cout<<"Enter coordinates of second point: ";
    cin>>c>>d;
    // int sum=0;
    // for (int i=a-1;i<c;i++){
    //     for (int j=b-1;j<d;j++){
    //         sum+=arr[i][j];
    //     }
    // }
    int sum = arr[a][b]+arr[c][d];
    cout<<"Sum: "<<sum;
    return 0;
}