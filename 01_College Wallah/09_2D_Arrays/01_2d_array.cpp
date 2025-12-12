#include<iostream>
using namespace std;

int main()
{
    int arr[2][3];
    //creates a matrix with 8 rows and 6 columns
    arr[0][0] = 15; //value assignment
    arr[0][1] = 44;
    arr[0][2] = 28;
    arr[1][0] = 69;
    arr[1][1] = 31;
    arr[1][2] = 72;
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}