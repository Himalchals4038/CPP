#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &vec, int n){
    vector<vector<int>> ans;
    set<vector<int>> quadruplets;
    sort(vec.begin(), vec.end());
    for (int i=0;i<vec.size();i++){
        for(int j=i+1; j<vec.size(); j++){
            int low = j+1;
            int high = vec.size()-1;
            while (low<high){
                long long current_sum = (long long)vec[i] + vec[j] + vec[low] + vec[high];
                if (current_sum==n){
                    vector<int> temp = {vec[i],vec[j],vec[low],vec[high]};
                    if(quadruplets.find(temp) == quadruplets.end()){
                        quadruplets.insert(temp);
                        ans.push_back(temp);
                    }
                    low++;
                    high--;
                }
                else if (current_sum<n) low++;
                else high--;
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