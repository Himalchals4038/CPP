#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap<int, string> mp1;
    mp1.insert({0, "Zero"});
    mp1.insert({1, "One"});
    mp1.insert({1, "one"});
    mp1.emplace(2, "Two");
    mp1.emplace(3, "Three");

    for (auto& [key, val] : mp1) cout<<key<<" "<<val<<endl;

    return 0;
}