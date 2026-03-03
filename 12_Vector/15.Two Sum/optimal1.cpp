#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &vec, int n){
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0; i<vec.size(); i++){
        if(m.find(n-vec[i])!=m.end()){
            ans.push_back(m[n-vec[i]]);
            ans.push_back(i);
            return ans;
        }
        m[vec[i]] = i;
    }
    return ans;
}
int main(){
    vector<int> vec = {5,2,11,7,15,20,3,19,8,10,4};
    int n;
    cout<<"Enter Target: "<<endl;
    cin>>n;
    vector<int> ans = twoSum(vec,n);
    copy(ans.begin(),ans.end(),ostream_iterator<int>(cout," "));
    return 0;
}