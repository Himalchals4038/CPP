#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> vec1 = {{5, 1}, {7, 2}, {9, 4}, {3, 0}, {7, 8}, {4, 6}};
    sort(vec1.begin(), vec1.end());
    for (auto p : vec1) cout << p.first << " " << p.second << endl;
    //Sorting consider the first place initially, if it is same for 2 values, then the 2nd place is considered
    return 0;
}