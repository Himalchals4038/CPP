#include <bits/stdc++.h>
using namespace std;
set<int> twoSum(vector<int> &vec, int n){
    set<int> res;
    for (int i=0; i<vec.size()-1; i++){
        for (int j=i+1; j<vec.size(); j++){
            if (vec[i]+vec[j]==n){
                res.insert(vec[i]);
                res.insert(vec[j]);
                return res;
            }
        }
    }
    return res;
}
int main(){
    vector<int> vec1 = {2, 7, 11, 15, 1, 4, 3, 6};
    int n = 9;
    set<int> res = twoSum(vec1, n);
    for (int x : res) cout<<x<<" ";
    return 0;
}