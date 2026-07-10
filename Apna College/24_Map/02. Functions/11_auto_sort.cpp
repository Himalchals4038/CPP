#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp1;
    mp1[3] = "Three";
    mp1[5] = "Five";
    mp1[1] = "One";
    mp1[6] = "Six";
    mp1[4] = "Four";
    mp1[0] = "Zero";
    mp1[2] = "Two";
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    
    map<string,int> mp2;
    mp2["Three"] = 3;
    mp2["Five"] = 5;
    mp2["One"] = 1;
    mp2["Six"] = 6;
    mp2["Four"] = 4;
    mp2["Zero"] = 0;
    mp2["Two"] = 2;
    //Map autosorts the keys and corresponding values in ascending order according to ASCII value of key
    for (auto& [key,val]:mp2) cout<<key<<" "<<val<<endl;

    return 0;
}