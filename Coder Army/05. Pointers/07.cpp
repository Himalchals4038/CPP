#include <bits/stdc++.h>
using namespace std;

int main(){
    int *ptr = new int;
    *ptr = 10;
    cout<<*ptr<<endl;
    delete ptr;

    float *ptr2 = new float;
    *ptr2 = 10.5;
    cout<<*ptr2<<endl;
    delete ptr2;

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *p = new int[n];
    for (int i=0; i<n; i++) p[i] = i+1;
    for (int i=0; i<n; i++) cout<<p[i]<<" ";
    cout<<endl;
    delete[] p;
    return 0;
}