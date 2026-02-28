#include<iostream>
using namespace std;

int main(){
    int arr[2][3];
    arr[0][0] = 15;
    arr[0][1] = 44;
    arr[0][2] = 28;
    arr[1][0] = 69;
    arr[1][1] = 31;
    arr[1][2] = 72;
    int trans[3][2];
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            trans[j][i] = arr[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}