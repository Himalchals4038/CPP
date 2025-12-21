#include <bits/stdc++.h>
using namespace std;
vector<int> sortArray(vector<int> &vec){
    int count0=0, count1=0, count2=0;
    for(int i=0;i<vec.size();i++){
        if (vec[i]==1) count1++;
        else if (vec[i]==2) count2++;
        else count0++;
    }
    int idx=0;
    for(int i=0;i<count0;i++) vec[idx++]=0;
    for(int i=0;i<count1;i++) vec[idx++]=1;
    for(int i=0;i<count2;i++) vec[idx++]=2;
    return vec;
}
int main(){
    vector<int> vec = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    vector<int> res = sortArray(vec);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    return 0;
}