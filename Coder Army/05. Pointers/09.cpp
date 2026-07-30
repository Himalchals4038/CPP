#include <bits/stdc++.h>
using namespace std;

int main(){
    int*** ptr = new int**[3];
    for (int i=0; i<3; i++) ptr[i] = new int*[3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            ptr[i][j] = new int[3];
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<3; k++){
                cin>>ptr[i][j][k];
            }
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<3; k++){
                cout<<ptr[i][j][k]<<" ";
            }
            cout<<endl;
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            delete [] ptr[i][j];
        }
    }
    for (int i=0; i<3; i++){
        delete [] ptr[i];
    }
    delete [] ptr;
    return 0;
}