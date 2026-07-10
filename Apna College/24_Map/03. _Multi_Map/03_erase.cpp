#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap<int, string> mp1;
    mp1.insert({0, "Zero"});
    mp1.insert({0, "zero"});
    mp1.insert({1, "One"});
    mp1.insert({1, "oNE"});
    mp1.insert({1, "one"});
    mp1.emplace(2, "Two");
    mp1.emplace(3, "Three");
    mp1.emplace(3, "three");

    for (auto& [key, val] : mp1) cout<<key<<" "<<val<<endl;
    cout<<"Count of 1: "<<mp1.count(1)<<endl;
    cout<<"Count of 2: "<<mp1.count(2)<<endl;
    cout<<"Count of 3: "<<mp1.count(3)<<endl;
    cout<<"Count of 4: "<<mp1.count(4)<<endl;
    
    //Removes all instances of that key from the multimap
    mp1.erase(1);
    for (auto& [key, val] : mp1) cout<<key<<" "<<val<<endl;
    cout<<"Count of 1: "<<mp1.count(1)<<endl;
    cout<<"Count of 2: "<<mp1.count(2)<<endl;
    cout<<"Count of 3: "<<mp1.count(3)<<endl;
    cout<<"Count of 4: "<<mp1.count(4)<<endl;

    return 0;
}