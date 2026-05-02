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
    cout<<"First Key: "<<mp1.begin()->first<<endl;
    cout<<"First Value: "<<mp1.begin()->second<<endl;

    cout<<"Last Key: "<<next(mp1.end(),-1)->first<<endl;
    cout<<"Last Value: "<<next(mp1.end(),-1)->second<<endl;

    return 0;
}