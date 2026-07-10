#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &vec, int n){
    vector<vector<int>> ans;
    set<vector<int>> quadruplets;
    for(int i=0; i<vec.size()-1; i++){
        for(int j=i+1; j<vec.size(); j++){
            for (int k = j+1; k<vec.size(); k++){
                for (int l = k+1;l<vec.size();l++){
                    if(vec[i]+vec[j]+vec[k]+vec[l] == n){
                        vector<int> temp = {vec[i],vec[j],vec[k],vec[l]};
                        sort(temp.begin(),temp.end());
                        if(quadruplets.find(temp) == quadruplets.end()){
                            quadruplets.insert(temp);
                            ans.push_back(temp);
                        }
                    }
                }
            }
        }
    }
    return ans;
}
int main(){
    vector<int> vec = {-1,0,1,2,-1,-4,-2,5,3,-6,4};
    int n;
    cout<<"Enter Target: ";
    cin>>n;
    vector<vector<int>> ans = fourSum(vec,n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++) cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}