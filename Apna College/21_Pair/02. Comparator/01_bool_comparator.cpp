#include <bits/stdc++.h>
using namespace std;

//Boolean comparator
bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second>p2.second) return true;
    if(p1.second<p2.second) return false;
    if(p1.first>p2.first) return true;
    if(p1.first<p2.first) return false;
}
//Sorts pairs on the basis of second element, if they are same, then sort on the basis of first element

int main(){
    vector<pair<int, int>> vec = {{5, 1}, {7, 2}, {9, 4}, {3, 0}, {7, 8}, {4, 6}, {3, 2}, {7, 4}};
    sort(vec.begin(), vec.end(), comparator);
    for (auto p : vec) cout<<p.first<<" "<<p.second<<endl;
    return 0;
}