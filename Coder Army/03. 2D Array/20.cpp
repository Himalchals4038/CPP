#include <bits/stdc++.h>
using namespace std;
vector<int> searchRowColumnSorted(vector<vector<int>> &vec, int target){
    if (vec.empty() || vec[0].empty()) return {-1, -1};
    vector<int> ans(2, -1);
    for (int i=0; i<vec.size(); i++){
        if (vec[i][0] <= target && vec[i][vec[i].size()-1] >= target){
            int low = 0;
            int high = vec[i].size()-1;
            while (low <= high){
                int mid = low + (high - low)/2;
                if (vec[i][mid] == target){
                    ans[0] = i;
                    ans[1] = mid;
                    return ans;
                }
                else if (vec[i][mid] < target) low = mid+1;
                else high = mid-1;
            }
        }
        else continue;
    }
    return ans;
}
int main(){
    
    return 0;
}