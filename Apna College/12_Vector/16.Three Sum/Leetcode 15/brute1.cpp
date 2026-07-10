#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &vec, int n){
    vector<vector<int>> ans;
    set<vector<int>> trip;
    for(int i=0; i<vec.size()-1; i++){
        for(int j=i+1; j<vec.size(); j++){
            for (int k = j+1; k < vec.size(); k++){
                if(vec[i]+vec[j]+vec[k] == n){
                    vector<int> iter = {vec[i],vec[j],vec[k]};
                    sort(iter.begin(),iter.end());
                    if (trip.find(iter)==trip.end()){
                        trip.insert(iter);
                        ans.push_back(iter);
                    }
                }
            } 
        }
    }
    return ans;
}
int main(){
    vector<int> vec = {-1,0,1,2,-1,-4};
    int n;
    cout<<"Enter Target: "<<endl;
    cin>>n;
    vector<vector<int>> ans = threeSum(vec,n);
    for (auto& num:ans){
        for (auto& triplet:num) cout<<triplet<<" ";
        cout<<endl;
    }
    return 0;
}