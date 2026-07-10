#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    for (int i=0;i<size(arr);i++){
        for (int j=i;j<size(arr);j++){
            for (int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}