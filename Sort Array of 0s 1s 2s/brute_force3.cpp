#include <bits/stdc++.h>
using namespace std;
vector<int> sortArray(vector<int> &vec){
    map<int, int> freqMap;
    for (int i : vec) freqMap[i]++;
    vector<int> ans;
    for (auto const &[val, count] : freqMap) fill_n(back_inserter(ans), count, val);
    return ans;
}
int main(){
    vector<int> vec = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    vector<int> res = sortArray(vec);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    return 0;
}