#include <bits/stdc++.h>
using namespace std;
bool threeSum(vector<int> &vec, int n){
    for(int i=0; i<vec.size()-1; i++){
        for(int j=i+1; j<vec.size(); j++){
            for (int k = j+1; k < vec.size(); k++) if(vec[i]+vec[j]+vec[k] == n) return true;
        }
    }
    return false;
}
int main(){
    vector<int> vec = {-1,0,1,2,-1,-4};
    int n;
    cout<<"Enter Target: "<<endl;
    cin>>n;
    (threeSum(vec,n)) ? cout<<"True" : cout<<"False";
    return 0;
}