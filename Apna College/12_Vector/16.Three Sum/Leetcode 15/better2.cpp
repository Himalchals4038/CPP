#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &vec, int sum){
    vector<vector<int>> ans;
    int n = vec.size();
    set<vector<int>> uniqueTrips;
    for (int i=0;i<n;i++){
        int tar = vec[i];
        set<int> s;
        for (int j=i+1;j<n;j++){
            int third = sum - tar - vec[j];
            if (s.find(third)!=s.end()){
                vector<int> trip = {vec[i],vec[j],third};
                sort(trip.begin(),trip.end());
                if (uniqueTrips.find(trip)==uniqueTrips.end()){
                    uniqueTrips.insert(trip);
                    ans.push_back(trip);
                }
            }
            s.insert(vec[j]);
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