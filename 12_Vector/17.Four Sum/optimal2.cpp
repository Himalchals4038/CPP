#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &vec, int n){
    vector<vector<int>> ans;
    sort(vec.begin(), vec.end());
    int size = vec.size();
    if (size < 4) return ans;

    for (int i=0; i<size-3; i++){
        if (i > 0 && vec[i] == vec[i-1]) continue;
        for(int j=i+1; j<size-2; j++){
            if (j > i+1 && vec[j] == vec[j-1]) continue;
            int low = j+1;
            int high = size-1;
            
            while (low<high){
                long long current_sum = (long long)vec[i] + vec[j] + vec[low] + vec[high];
                if (current_sum==n){
                    ans.push_back({vec[i],vec[j],vec[low],vec[high]});
                    
                    int last_low = vec[low], last_high = vec[high];
                    while(low < high && vec[low] == last_low) low++;
                    while(low < high && vec[high] == last_high) high--;
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