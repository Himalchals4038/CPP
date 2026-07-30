#include <bits/stdc++.h>
using namespace std;
//ptr[i][j] = *(*ptr+i)+j)
int main(){
    int** ptr = new int *[6];
    for (int i=0; i<6; i++) ptr[i] = new int[6];
    for (int i=0; i<6; i++){
        for (int j=0; j<6; j++){
            cin>>ptr[i][j];
        }
    }
    for (int i=0; i<6; i++){
        for (int j=0; j<6; j++){
            cout<<ptr[i][j]<<" ";
        }
    }
    for (int i=0; i<6; i++) delete[] ptr[i];
    delete[] ptr;
    return 0;
}