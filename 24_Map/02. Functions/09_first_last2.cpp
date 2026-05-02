#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp1;
    mp1[0] = "Zero";
    mp1[1] = "One";
    mp1[2] = "Two";
    mp1[3] = "Three";
    mp1[4] = "Four";
    
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    cout<<"First Key: "<<next(mp1.rend(),-1)->first<<endl;
    cout<<"First Value: "<<next(mp1.rend(),-1)->second<<endl;

    cout<<"Last Key: "<<mp1.rbegin()->first<<endl;
    cout<<"Last Value: "<<mp1.rbegin()->second<<endl;

    return 0;
}