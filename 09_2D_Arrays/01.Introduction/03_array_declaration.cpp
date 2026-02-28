#include<iostream>
using namespace std;

int main(){
    //various methods of assigning values in arrays
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr3[][3] = {1,2,3,4,5,6,7,8,9};

    cout<<arr1[1][2]<<endl;
    arr2[2][1] = 15;
    cout<<arr2[2][1]<<endl;
    
    cout<<arr3[1][1]<<endl;
    arr3[1][1] = arr1[2][2];
    cout<<arr3[1][1]<<endl;
    return 0;
}