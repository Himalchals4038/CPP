#include <bits/stdc++.h>
using namespace std;
int rev(int n){
    int ans = 0;
    while(n>0){
        int dig = n%10;
        if (ans > INT_MAX/10||ans < INT_MIN/10) return 0;
        ans = ans*10 + dig;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Reverse Number: "<<rev(n);
    return 0;
}