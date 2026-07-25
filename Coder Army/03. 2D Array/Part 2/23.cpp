#include <bits/stdc++.h>
using namespace std;
vector<int> findMissRepeat(vector<int> &vec){
    if (vec.empty()) return{};
    unordered_map<int, int> freq;
    int repeating = -1, missing = -1;
    int min_val = INT_MAX, max_val = INT_MIN;

    for (int num : vec) freq[num]++;
    for (auto const& [num, count] : freq){
        if (count > 1) repeating = num;
        min_val = min(min_val, num);
        max_val = max(max_val, num);
    }
    for (int i = min_val; i <= max_val + 1; ++i){
        if (freq.find(i) == freq.end()){
            missing = i;
            break;
        }
    }
    return{repeating, missing};
}
int main(){
    vector<int> vec1 ={3, 1, 2, 5, 3, 4, 7};
    vector<int> res1 = findMissRepeat(vec1);
    cout<<"Repeating: "<<res1[0]<<", Missing: "<<res1[1]<<endl;

    vector<int> vec2 = {13, 11, 12, 15, 13, 14, 17};
    vector<int> res2 = findMissRepeat(vec2);
    cout<<"Repeating: "<<res2[0]<<", Missing: "<<res2[1]<<endl;
    return 0;
}
