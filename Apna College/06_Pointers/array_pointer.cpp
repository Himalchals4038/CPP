#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int a = 7;
    // arr = &a; //constant pointer
    cout<<*arr<<endl; //display value at index 0
    cout<<*(arr+1)<<endl; //display value at index 1
    cout<<*(arr+2)<<endl; //display value at index 2

    return 0;
}