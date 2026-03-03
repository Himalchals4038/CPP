#include <bits/stdc++.h>
using namespace std;
int duplicate(vector<int> &vec){
    unordered_set<int> s;
    for (int i : vec) {
        if (s.find(i) != s.end()) return i;
        s.insert(i);
    }
    return -1;
}
int main(){
    vector<int> vec = {3,1,3,4,2};
    cout<<duplicate(vec);
    return 0;
}