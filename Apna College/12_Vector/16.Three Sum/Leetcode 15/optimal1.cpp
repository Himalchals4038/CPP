#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> threeSum(vector<int> &vec, int n){
    int sz = vec.size();
    if (sz<3) return {};
    sort(vec.begin(), vec.end());
    vector<vector<int>> ans;
    for (int i=0; i<sz-2; ++i){
        if (i>0 && vec[i] == vec[i-1]) continue;
        if ((long long)vec[i] + vec[i+1] + vec[i+2]>n) break;
        if ((long long)vec[i] + vec[sz-2] + vec[sz-1]<n) continue;
        int low = i+1, high = sz-1;

        while (low<high){
            long long current_sum = (long long)vec[i]+vec[low]+vec[high];
            if (current_sum == n){
                ans.push_back({vec[i], vec[low], vec[high]});
                low++;
                high--;
                while (low<high && vec[low]==vec[low-1]) low++;
                while (low<high && vec[high]==vec[high+1]) high--;
            }
            else if (current_sum<n) low++;
            else high--;
        }
    }
    return ans;
}
int main(){
    vector<int> vec = {5,2,11,7,15,8,13,4,16,17,3};
    int n;
    cout<<"Enter Target: ";
    cin>>n;
    vector<vector<int>> ans = threeSum(vec,n);
    for (auto& triplet : ans){
        for (auto& num : triplet) cout<<num<<" ";
        cout<<endl;
    }
    return 0;
}