#include <bits/stdc++.h>
using namespace std;
vector<int> fourSum(vector<int> &vec, int target){
    int n = vec.size();
    if (n<4) return {};
    sort(vec.begin(), vec.end());

    for (int i=0; i<n-3; i++){
        if (vec[i]>target && vec[i]>0) break;
        if (i>0 && vec[i]==vec[i-1]) continue;

        for (int j=i+1; j<n-2; j++){
            if (vec[j]>target && vec[j]>0) break;
            if (j>i+1 && vec[j]==vec[j-1]) continue;
            
            int left = j+1, right = n-1;
            while (left < right){
                long long sum = (long long)vec[i] + vec[j] + vec[left] + vec[right];
                if (sum == target) return {vec[i], vec[j], vec[left], vec[right]};
                else if (sum < target) left++;
                else right--;
            }
        }
    }
    return {};
}
int main(){
    vector<int> vec1 = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<int> res = fourSum(vec1, target);
    if (res.empty()) cout<<"No quadruplet found."<<endl;
    else{
        cout<<"Quadruplet found: ";
        copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    }
    return 0;
}