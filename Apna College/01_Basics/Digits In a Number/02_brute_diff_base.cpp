#include <bits/stdc++.h>
using namespace std;
int length(int n, int base){
    int len = 0;
    while(n>0){
        len++;
        n/=base;
    }
    return len;
}
int main(){
    int n, base;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Length of the number: "<<length(n,base);
    return 0;
}