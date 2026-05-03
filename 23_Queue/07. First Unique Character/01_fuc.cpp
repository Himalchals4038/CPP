#include <bits/stdc++.h>
using namespace std;
int firstUniqChar(string s){
    unordered_map <char, int> m;
    queue<int> q;
    for (int i=0; i<s.length(); i++){
        if (m.find(s[i]) == m.end()) q.push(i);
        m[s[i]]++;
    }
    while (!q.empty() && m[s[q.front()]]>1) q.pop();
    if (!q.empty()) return q.front();
    return -1;
}
int main(){
    string s;
    cin>>s;
    cout<<firstUniqChar(s);
    return 0;
}