#include <bits/stdc++.h>
using namespace std;
vector<int> sort(vector<int> &vec1, vector<int> &vec2, int m, int n){
    int idx = m+n-1, i = m-1, j = n-1;
    while(i>=0 && j>=0){
        if (vec1[i] >= vec2[j]) vec1[idx--] = vec1[i--];
        else vec1[idx--] = vec2[j--];
    }
    while(j>=0) vec1[idx--] = vec2[j--];
    return vec1;
}
int main(){
    vector<int> vec1 = {1,2,3,0,0,0};
    vector<int> vec2 = {2,5,6};
    int m = 3, n = 3;
    vector<int> vec3 = sort(vec1,vec2,m,n);
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
    return 0;
}