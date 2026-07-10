#include <bits/stdc++.h>
using namespace std;
bool threeSum(vector<int> &vec, int n){
    sort(vec.begin(), vec.end());
    for (int i = 0; i<vec.size(); ++i){
        int low = i+1;
        int high = vec.size()-1;

        while (low<high){
            int current_sum = vec[i] + vec[low] + vec[high];
            if (current_sum==n) return true;
            else if (current_sum<n) low++;
            else high--;
        }
    }
    return false;
}
int main(){
    vector<int> vec = {5,2,11,7,15,8,13,4,16,17,3};
    int n;
    cout<<"Enter Target: "<<endl;
    cin>>n;
    (threeSum(vec,n)) ? cout<<"True" : cout<<"False";
    return 0;
}