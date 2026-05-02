#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp1;
    mp1[0] = "Zero";
    mp1[1] = "One";
    mp1[2] = "Two";
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    
    //Removes key and value from the map
    mp1.erase(0);
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    return 0;
}