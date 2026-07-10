#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &vec, int n){
    set<vector<int>> st;
    for(int i=0; i<vec.size(); i++){
        for(int j=i+1; j<vec.size(); j++){
            for (int k = j+1; k<vec.size(); k++){
                for (int l = k+1;l<vec.size();l++){
                    long long sum = (long long)vec[i] + vec[j] + vec[k] + vec[l];
                    if(sum == n){
                        vector<int> temp = {vec[i],vec[j],vec[k],vec[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}
int main(){
    vector<int> vec = {-1,0,1,2,-1,-4,-2,5,3,-6,4};
    int n;
    cout<<"Enter Target: ";
    cin>>n;
    vector<vector<int>> ans = fourSum(vec,n);
    for(auto it : ans){
        for(auto ele : it) cout<<ele<<" ";
        cout<<endl;
    }
    return 0;
}