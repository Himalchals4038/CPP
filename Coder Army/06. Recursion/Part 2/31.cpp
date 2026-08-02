#include <bits/stdc++.h>
using namespace std;
int subMain(vector<int> &vec, int index, int sum, int n){
    if (index == n) return sum == 0;
    return subMain(vec, index+1, sum, n) + subMain(vec, index+1, sum-vec[index], n);
}
int subset(vector<int> &vec, int sum){
    return subMain(vec, 0, sum, vec.size());
}
int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int sum = 8;
    cout<<subset(vec, sum);
    return 0;
}