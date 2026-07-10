#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp1;
    mp1[0] = "Zero";
    mp1[1] = "One";
    mp1[2] = "Two";
    mp1[3] = "Two";
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;

    //Returns no. of keys present in the map (even if some keys point to the same value)
    cout<<"Size: "<<mp1.size()<<endl;
    return 0;
}