#include<iostream>
using namespace std;

int main()
{
    int arr[] = {7, 5, 4, 2, 8, 6, 3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int p=1;
    for (int i=0;i<len;i++){
        p*=arr[i];
    }
    cout<<"Product of all elements: "<<p;
    return 0;
}