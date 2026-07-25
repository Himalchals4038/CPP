#include <bits/stdc++.h>
using namespace std;
pair<int, int> findPairWithDifference(vector<int>& vec, int n){
    unordered_set<int> seen;
    for (int x : vec){
        if (seen.count(x-n)) return {x-n, x};
        if (seen.count(x+n)) return {x, x+n};
        seen.insert(x);
    }
    return {-1, -1};
}
int main(){
    vector<int> vec1 = {5, 20, 3, 2, 50, 80};
    pair<int, int> result = findPairWithDifference(vec1, 78);
    cout<<"Pair: "<<result.first<<", "<<result.second<<endl;
    return 0;
}