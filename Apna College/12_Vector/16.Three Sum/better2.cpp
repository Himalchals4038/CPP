#include <bits/stdc++.h>
using namespace std;
vector<int> threeSum(vector<int> &vec, int n){
    sort(vec.begin(), vec.end());
    for (int i = 0; i<vec.size(); ++i){
        int low = i+1;
        int high = vec.size()-1;

        while (low<high){
            int current_sum = vec[i] + vec[low] + vec[high];
            if (current_sum==n) return {i, low, high};
            else if (current_sum<n) low++;
            else high--;
        }
    }
    return {};
}
int main(){
    vector<int> vec = {5,2,11,7,15,8,13,4,16,17,3};
    int n;
    cout<<"Enter Target: "<<endl;
    cin>>n;
    vector<int> ans = threeSum(vec,n);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}