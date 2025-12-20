#include <bits/stdc++.h>
using namespace std;
vector<int> sort(vector<int> &vec){
    for (int i=0; i<vec.size()-1; i++){
        for (int j=i+1; j<vec.size(); j++){
            if (vec[i]>vec[j]) swap(vec[i], vec[j]);
        }
    }
    return vec;
}
int main(){
    vector<int> vec = {2,0,2,1,1,0,1,2,0,0};
    vector<int> res = sort(vec);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    return 0;
}