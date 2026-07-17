#include <bits/stdc++.h>
using namespace std;
vector<int> binarySearch(vector<vector<int>> &vec, int target){
    if (vec.empty() || vec[0].empty()) return {-1, -1};
    for (int i=0; i<vec.size(); i++){
        if (vec[i][0] <= target && vec[i][vec[i].size()-1] >= target){
            int low = 0;
            int high = vec[i].size()-1;
            while (low <= high){
                int mid = low + (high - low)/2;
                if (vec[i][mid] == target) return {i, mid};
                else if (vec[i][mid] < target) low = mid+1;
                else high = mid-1;
            }
        }
        else continue;
    }
    return {-1, -1};
}
int main(){
    vector<vector<int>> vec = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    vector<int> res1 = binarySearch(vec, 12);
    copy(res1.begin(), res1.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";

    vector<int> res2 = binarySearch(vec, 102);
    copy(res2.begin(), res2.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";
    
    vector<int> res3 = binarySearch(vec, 1);
    copy(res3.begin(), res3.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";
    return 0;
}