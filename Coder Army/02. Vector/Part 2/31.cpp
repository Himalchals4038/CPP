#include <bits/stdc++.h>
using namespace std;
int maxDiff(vector<int> &vec, int index){
    int maxDiff = INT_MIN;
    for (int i=index+1; i<vec.size(); i++) maxDiff = max(maxDiff, abs(vec[i]-vec[index]));
    return maxDiff;
}
vector<int> maxDiffArray(vector<int> &vec){
    vector<int> maxDiffArr;
    for (int i=0; i<vec.size()-1; i++) maxDiffArr.push_back(maxDiff(vec, i));
    return maxDiffArr;
}
int main(){
    vector<int> vec1 = {9, 5, 8, 12, 2, 3, 7, 4};
    vector<int> ans = maxDiffArray(vec1);
    cout<<"Max Difference Array: ";
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}