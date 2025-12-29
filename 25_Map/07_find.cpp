#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp1;
    mp1[0] = "Zero";
    mp1[1] = "One";
    mp1[2] = "Two";
    mp1[3] = "Three";
    mp1[4] = "Four";
    mp1[5] = "Five";
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;

    auto it = mp1.find(3);
    if (it != mp1.end()) cout << "Found key " << it->first << " with value: " << it->second << endl;
    else cout << "Key not found" << endl;
    return 0;
}