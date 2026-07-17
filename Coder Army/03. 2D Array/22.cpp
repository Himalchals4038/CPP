#include <bits/stdc++.h>
using namespace std;
vector<int> findMissRepeat(vector<int> &vec){
    if (vec.empty()) return{};
    unordered_map<int, int> freq;
    int repeating = -1, missing = -1;
    for (int num : vec) freq[num]++;
    for (auto const& [num, count] : freq){
        if (count > 1){
            repeating = num;
            break;
        }
    }
    for (int i = 1; i <= vec.size(); ++i){
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
    return 0;
}