#include <bits/stdc++.h>
using namespace std;
int firstUniqChar(string s){
    array<int, 26> freq{};
    for (unsigned char c : s) freq[c]++;
    for (int i=0; i<(int)s.length(); i++){
        if (freq[(unsigned char)s[i]] == 1) return i;
    }
    return -1;
}
int main(){
    string s;
    cin>>s;
    cout<<firstUniqChar(s);
    return 0;
}