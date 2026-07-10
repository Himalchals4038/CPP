#include <bits/stdc++.h>
using namespace std;
vector<int> bubble(vector<int>& vec){
    int n = vec.size();
    for (int i=0;i<n-1;i++){
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++){
            if (vec[j]<vec[j+1]){
                swap(vec[j],vec[j+1]);
                isSwap = true;
            } 
        }
        if (!isSwap) return vec;
    }
    return vec;
}
int main(){
    vector<int> vec = {15,21,41,76,91,82,36,57,10,24,73};
    vector<int> res = bubble(vec);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout," "));
    return 0;
}