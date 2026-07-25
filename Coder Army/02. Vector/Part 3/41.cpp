#include <bits/stdc++.h>
using namespace std;
vector<int> threeSum(vector<int> &vec, long long target, int start_index){
    int n = vec.size();
    for (int i = start_index; i < n-2; i++){
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

vector<int> fourSum(vector<int> &vec, int target){
    int n = vec.size();
    if (n<4) return {};
    sort(vec.begin(), vec.end());

    for (int i=0; i<n-3; i++){
        if (i>0 && vec[i]==vec[i-1]) continue;

        long long new_target = (long long)target - vec[i];
        vector<int> triplet = threeSum(vec, new_target, i + 1);

        if (!triplet.empty()){
            triplet.insert(triplet.begin(), vec[i]);
            return triplet;
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