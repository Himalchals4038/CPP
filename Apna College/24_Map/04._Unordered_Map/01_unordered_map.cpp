#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, string> mp1;
    //Keys are not sorted according to ASCII values

    mp1.emplace(1,"One");
    mp1.emplace(4,"Four");
    mp1.emplace(0,"Zero");
    mp1.emplace(3,"Three");
    mp1.emplace(6,"Six");
    mp1.emplace(2,"Two");
    mp1.emplace(5,"Five");

    for (auto& [key, val] : mp1) cout<<key<<" "<<val<<endl;

    return 0;
}