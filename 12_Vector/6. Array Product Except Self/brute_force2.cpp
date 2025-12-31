#include <bits/stdc++.h>
using namespace std;
vector<int> prod(vector<int> vec){
    vector<int> ans;
    for (int i:vec){
        int prod = (accumulate(vec.begin(),vec.end(),1,multiplies<int>()))/i;
        ans.push_back(prod);
    }
    return ans;
}
int main(){
    vector<int> vec = {1,2,3,4,5,6};
    vector<int> ans = prod(vec);
    for (int i:ans) cout<<i<<" ";
    return 0;
}