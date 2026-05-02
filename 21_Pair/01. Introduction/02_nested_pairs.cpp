#include <bits/stdc++.h>
using namespace std;
//Nested Pairs can be used to stored one pair inside another
int main(){
    pair<double, pair<char, int>> ipr1 = {25.84, {'t', 86}};
    cout<<ipr1.first<<" "<<ipr1.second.first<<" "<<ipr1.second.second<<endl;

    vector<pair<int,int>> vec1 = {{15, 26}, {48, 75}, {71, 34}};
    // for (pair<int, int> p : vec1) cout << p.first << " " << p.second << endl;
    for (auto p : vec1) cout << p.first << " " << p.second << endl;
    return 0;
}