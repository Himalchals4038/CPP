#include <bits/stdc++.h>
using namespace std;
int rev_str(int n) {
    string s = to_string(n);
    bool neg = false;
    if (s[0] == '-') {
        neg = true;
        s = s.substr(1);
    }
    std::reverse(s.begin(), s.end());
    int res = stoi(s);
    return neg ? -res : res;
}
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Reverse Number: "<<rev_str(n);
    return 0;
}