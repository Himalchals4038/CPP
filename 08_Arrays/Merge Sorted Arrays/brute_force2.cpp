#include <bits/stdc++.h>
using namespace std;
vector<int> ins(vector<int> &vec1, vector<int> &vec2){
    int n = vec2.size(), m = vec1.size() - n, i = 0, j = 0;
    vector<int> vec3;
    while (i<m && j<n){
        if (vec1[i] < vec2[j]) vec3.push_back(vec1[i++]);
        else vec3.push_back(vec2[j++]);
    }
    while (i < m) vec3.push_back(vec1[i++]);
    while (j < n) vec3.push_back(vec2[j++]);
    return vec3;
}
int main(){
    vector<int> vec1 = {1,2,3,0,0,0};
    vector<int> vec2 = {4,5,6};
    vector<int> vec3 = ins(vec1,vec2);
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
    return 0;
}