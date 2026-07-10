#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdint>
using namespace std;

string conv(int v) {
    if (v==0) return "0";
    bool neg=v<0;
    int uv = neg ? int(-v) : int(v);
    string s;
    while (uv>0){
        int digit = int(uv%10);
        s.push_back(char('0'+digit));
        uv/=10;
    }
    if (neg) s.push_back('-');
    reverse(s.begin(),s.end());
    return s;
}

int main() {
    string s;
    cout << "Enter binary number: ";
    cin>>s;
    if (s.empty()){
        cout<<"Empty input"<<endl; 
        return 0;
    }
    for (char c:s){
        if (c!='0' && c!='1'){
            cout<<"Invalid binary digit: "<<c<<endl; 
            return 0;
        }
    }
    if (s.size()>64) {
        cout<<"Input too long (>64 bits)"<<endl;
        return 0;
    }
    int u=0;
    for (char c:s){
        u = (u<<1)|int(c-'0');
    }
    if (s[0]=='1'){
        int sub = 1;
        sub<<=s.size();
        u-=sub;
    }
    cout<<"Decimal value: "<<conv(u)<<endl;
    return 0;
}
