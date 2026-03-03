#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &vec, int n){
    sort(vec.begin(), vec.end());
    vector<vector<int>> ans;
    for (int i=0; i<vec.size(); ++i){
        if (i>0 && vec[i] == vec[i-1]) continue;
        int low = i+1;
        int high = vec.size()-1;

        while (low<high){
            int current_sum = vec[i]+vec[low]+vec[high];
            if (current_sum == n) {
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
    cout<<"Enter Target: "<<endl;
    cin>>n;
    vector<vector<int>> ans = threeSum(vec,n);
    for (auto& triplet : ans) {
        for (auto& num : triplet) cout << num << " ";
        cout << endl;
    }
    return 0;
}