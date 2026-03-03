#include<iostream>
using namespace std;

int main()
{
    int x[5]; //declaring an array
    x[0] = 63;
    x[1] = -55;
    x[2] = false;
    x[3] = 'b';
    x[4] = 89.31;

    int arr[20] = {11, 22, 33, 44, 55};
    //Array of size 20 has been formed but only first 5 boxes have been assigned data
    cout<<sizeof(arr)<<endl; //Size is 4*20 = 80 bytes
    return 0;
}