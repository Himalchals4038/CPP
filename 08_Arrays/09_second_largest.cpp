#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int arr[] = {55, 44, 72, 63, 91, 28};
    int len = sizeof(arr)/sizeof(arr[0]);
    int mx=INT_MIN; //minimum possible number in c++
    for (int i=0;i<len;i++){
        mx = max(mx,arr[i]);
    }
    int mx2=INT_MIN;
    for (int i=0;i<len;i++){
        if (arr[i] == mx) continue;
        mx2 = max(mx2,arr[i]);
    }
    cout<<"Second largest no. in array: "<<mx2<<endl;
    return 0;
}