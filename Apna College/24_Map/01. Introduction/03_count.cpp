#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp1;
    mp1[0] = "Zero";
    mp1[1] = "One";
    mp1[2] = "Two";

    //Returns no. of keys of that present in the map
    cout<<"Count of 0: "<<mp1.count(0)<<endl;
    cout<<"Count of 3: "<<mp1.count(3)<<endl;
    //Returns 0/1 for maps, can return >1 for multimaps
    
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    return 0;
}