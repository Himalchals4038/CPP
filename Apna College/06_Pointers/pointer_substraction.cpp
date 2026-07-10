#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int* ptr2; //Assume address 100
    int* ptr3 = ptr2 + 3; //Address 112
    cout<<ptr3-ptr2<<endl;
    return 0;
}