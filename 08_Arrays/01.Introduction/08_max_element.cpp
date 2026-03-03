#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int arr[] = {55, 44, 72, 63, 91, 28};
    int len = sizeof(arr)/sizeof(arr[0]);
    int p=INT_MIN; //minimum possible number in c++
    int q=INT_MAX; //maximum possible number in c++
    for (int i=0;i<len;i++){
        p = max(p,arr[i]);
        q = min(q,arr[i]);
    }
    cout<<"Greatest no. in array: "<<p<<endl;
    cout<<"Smallest no. in array: "<<q<<endl;   
    return 0;
}