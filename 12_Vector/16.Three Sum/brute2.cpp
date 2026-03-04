#include <bits/stdc++.h>
using namespace std;
vector<int> threeSum(vector<int> &vec, int n){
    for(int i=0; i<vec.size()-1; i++){
        for(int j=i+1; j<vec.size(); j++){
            for (int k = j+1; k < vec.size(); k++){
                if(vec[i]+vec[j]+vec[k] == n){
                    return {i, j, k};
                }
            } 
        }
    }
    return {};
}
int main(){
    vector<int> vec = {-1,0,1,2,-1,-4};
    int n;
    cout<<"Enter Target: "<<endl;
    cin>>n;
    vector<int> ans = threeSum(vec,n);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}