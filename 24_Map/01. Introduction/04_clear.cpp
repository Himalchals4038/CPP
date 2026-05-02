#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp1;
    mp1[0] = "Zero";
    mp1[1] = "One";
    mp1[2] = "Two";
    
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    cout<<"Size: "<<mp1.size()<<endl;
    
    //Clears all keys and values from the map
    mp1.clear();
    cout<<"Size: "<<mp1.size()<<endl;
    return 0;
}