#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp1;
    mp1[0] = "Zero";
    mp1[1] = "One";
    mp1[2] = "Two";
    mp1[3] = "Three";
    mp1[4] = "Four";
    
    // Using 'auto' (Copy)
    for (auto [key, val] : mp1){
        val = "Changed"; // Only changes the local copy
    }
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    // Map still contains "Zero", "One", etc.
    
    // Using 'auto&' (Reference)
    for (auto& [key, val] : mp1){
        val = "Changed"; // Updates the actual map
    }
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    // Map now contains "Changed", "Changed", etc.
    
    return 0;
}