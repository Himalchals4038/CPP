#include <bits/stdc++.h>
using namespace std;
vector<int> prod(vector<int> vec){
    vector<int> ans;
    for (int i:vec){
        int temp=1;
        for (int j:vec){
            if (i!=j) temp*=j;
        }
        ans.push_back(temp);
    }
    return ans;
}
int main(){
    vector<int> vec = {1,2,3,4,5,6};
    vector<int> ans = prod(vec);
    for (int i:ans) cout<<i<<" ";
    return 0;
}