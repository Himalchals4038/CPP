#include <bits/stdc++.h>
using namespace std;
int majorElement(vector<int> &vec){
    int n = vec.size();
    unordered_map<int, int> m;
    for (int i=0; i<n; i++) m[vec[i]]++;
    for (auto it = m.begin(); it != m.end(); it++){
        if (it->second > n/2) return it->first;
    }
    return -1;
}
int main(){
    vector<int> vec1 = {1, 2, 4, 2, 3, 2, 3, 2, 2, 2};
    cout<<majorElement(vec1);
    return 0;
}