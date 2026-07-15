#include <bits/stdc++.h>
using namespace std;
vector<int> threeSum(vector<int> &vec, int target){
    int n = vec.size();
    if (n < 3) return {};
    sort(vec.begin(), vec.end());

    for (int i=0; i < n-2; i++){
        if (vec[i] > target && vec[i] > 0) break;
        if (i>0 && vec[i] == vec[i-1]) continue;

        int left = i+1, right = n-1;
        while (left < right){
            long long sum = (long long)vec[i] + vec[left] + vec[right];
            if (sum == target) return {vec[i], vec[left], vec[right]};
            else if (sum < target) left++;
            else right--;
        }
    }
    return {};
}
int main(){
    vector<int> vec1 ={-1, 0, 1, 2, -1, -4};
    int target = 0;
    vector<int> res = threeSum(vec1, target);
    if (res.empty()) cout<<"No triplet found."<<endl;
    else{
        cout<<"Triplet found: ";
        copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    }
    return 0;
}