#include <bits/stdc++.h>
using namespace std;
vector<int> prefixSum(vector<int> &vec){
    vector<int> res(vec.size());
    res[0] = vec[0];
    for (int i=1;i<vec.size();i++) res[i] = res[i-1] + vec[i];
    return res;
}
vector<int> suffixSum(vector<int> &vec){
    vector<int> res(vec.size());
    res[vec.size()-1] = vec[vec.size()-1];
    for (int i=vec.size()-2;i>=0;i--) res[i] = res[i+1] + vec[i];
    return res;
}
int main(){
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> res1 = prefixSum(vec1);
    cout<<"Prefix Sum: ";
    copy(res1.begin(), res1.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";
    vector<int> res2 = suffixSum(vec1);
    cout<<"Suffix Sum: ";
    copy(res2.begin(), res2.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";
    return 0;
}