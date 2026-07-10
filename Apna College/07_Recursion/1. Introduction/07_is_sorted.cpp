#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &vec, int n){
    if (n==1) return true;
    if (vec[n-1]<vec[n-2]) return false;
    return isSorted(vec,n-1);
}
int main(){
    vector<int> vec = {1,2,3,8,4,5};
    (isSorted(vec,vec.size())) ? cout<<"True" : cout<<"False";
    return 0;
}