#include <bits/stdc++.h>
using namespace std;

string convertToBase7(int num){
    if (num==0) return "0";
    bool neg=num<0;
    long long n=num;
    if (neg) n=-n;
    string s;
    while (n>0){
        s.push_back(char('0'+(n%7)));
        n/=7;
    }
    if (neg) s.push_back('-');
    reverse(s.begin(),s.end());
    return s;
}

int main() {
    vector<int> tests={100,-7,0,INT_MAX,INT_MIN};
    for (int t:tests) cout<<t<<" -> "<<convertToBase7(t)<<'\n';
    return 0;
}
