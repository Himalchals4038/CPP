#include <bits/stdc++.h>
using namespace std;
int length(int n){
    int len = 0;
    while(n>0){
        len++;
        n/=10;
    }
    return len;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Length of the number: "<<length(n);
    return 0;
}