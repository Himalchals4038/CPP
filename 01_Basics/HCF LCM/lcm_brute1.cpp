#include <bits/stdc++.h>
using namespace std;
int lcmFunc(int a, int b){
    int ans = max(a, b);
    while(true){
        if (ans%a==0 && ans%b==0) return ans;
        ans++;
    }
    return ans;
}
int main(){
    int a, b;
    cout<<"Enter both numbers: ";
    cin>>a>>b;
    cout<<"LCM of both numbers: "<<lcmFunc(a, b)<<endl;
    return 0;
}