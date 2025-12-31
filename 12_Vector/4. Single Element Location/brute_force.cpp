#include <bits/stdc++.h>
using namespace std;
int inst(vector<int> &vec){
    for (int i=1; i < vec.size()-2; i++){
        if (vec[i]!=vec[i+1] && vec[i]!=vec[i-1]) return vec[i];
    }
}
int main(){
    vector<int> vec = {9,8,7,6,5,4,3,2,1,1,5,4,6,2,8,3,9};
    sort(vec.begin(),vec.end());
    cout<<"Index: "<<inst(vec)<<endl;
    return 0;
}