#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp1;
    mp1[0] = "Zero";
    mp1[1] = "One";
    mp1[2] = "Two";
    // for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    
    mp1.insert({3,"Three"}); //Syntax to be maintained
    mp1.emplace(4,"Four"); //No syntax required
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    
    return 0;
}