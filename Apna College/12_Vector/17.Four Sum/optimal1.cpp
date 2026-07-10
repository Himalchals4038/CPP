#include <bits/stdc++.h>
using namespace std;
bool fourSum(vector<int> &vec, int n){
    vector<vector<int>> ans;
    sort(vec.begin(), vec.end());
    int size = vec.size();
    if (size<4) return false;

    for (int i=0; i<size-3; i++){
        if (i>0 && vec[i] == vec[i-1]) continue;
        for(int j=i+1; j<size-2; j++){
            if (j>i+1 && vec[j] == vec[j-1]) continue;
            int low = j+1;
            int high = size-1;

            while (low<high){
                long long current_sum = (long long)vec[i] + vec[j] + vec[low] + vec[high];
                if (current_sum==n) return true;
                else if (current_sum<n) low++;
                else high--;
            }
        }
    }
    return false;
}
int main(){
    vector<int> vec = {-1,0,1,2,-1,-4,-2,5,3,-6,4};
    int n;
    cout<<"Enter Target: ";
    cin>>n;
    (fourSum(vec,n)) ? cout<<"True" : cout<<"False";
    return 0;
}