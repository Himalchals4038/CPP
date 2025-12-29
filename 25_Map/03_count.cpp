#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp1;
    mp1[0] = "Zero";
    mp1[1] = "One";
    mp1[2] = "Two";
    cout<<"Count: "<<mp1.count(0)<<endl;
    cout<<"Count: "<<mp1.count(3)<<endl;
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    cout<<"Size: "<<mp1.size()<<endl;
    return 0;
}