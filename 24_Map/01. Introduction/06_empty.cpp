#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp1;
    mp1[0] = "Zero";
    mp1[1] = "One";
    mp1[2] = "Two";
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    
    mp1.erase(0);
    for (auto& [key,val]:mp1) cout<<key<<" "<<val<<endl;
    //Checks if map is empty and returns 1 if true
    cout<<"Is Empty(?): "<<mp1.empty()<<endl;
    
    mp1.clear();
    cout<<"Is Empty(?): "<<mp1.empty()<<endl;
    return 0;
}