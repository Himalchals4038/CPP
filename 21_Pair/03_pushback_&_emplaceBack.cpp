#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> vec1 = {{15, 26}, {48, 75}, {71, 34}};
    for (auto p : vec1) cout << p.first << " " << p.second << endl;
    
    //Push back needs to be maintained in proper pair format
    vec1.push_back({37, 60});
    for (auto p : vec1) cout << p.first << " " << p.second << endl;

    //Emplace back allows numbers to be pushed in pairs directly without any formatting
    vec1.emplace_back(22, 39);
    for (auto p : vec1) cout << p.first << " " << p.second << endl;
    

    return 0;
}