#include <bits/stdc++.h>
using namespace std;
vector<int> sort(vector<int> &vec){
    sort(vec.begin(), vec.end());
    return vec;
}
int main(){
    vector<int> vec = {2,0,2,1,1,0,1,2,0,0};
    vector<int> res = sort(vec);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    return 0;
}