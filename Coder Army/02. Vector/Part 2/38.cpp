#include <bits/stdc++.h>
using namespace std;
vector<int> threeSum(vector<int> &vec, int target){
    if (vec.size() < 3) return {};
    sort(vec.begin(), vec.end());
    
    for (int i = 0; i < vec.size()-2; i++){
        if (i > 0 && vec[i] == vec[i-1]) continue;

        int left = i+1, right = vec.size()-1;
        while (left < right){
            int sum = vec[i] + vec[left] + vec[right];
            if (sum == target) return{vec[i], vec[left], vec[right]};
            else if (sum < target) left++;
            else right--;
        }
    }
    return{};
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