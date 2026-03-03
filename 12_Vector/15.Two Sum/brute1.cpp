#include <bits/stdc++.h>
using namespace std;
bool twoSum(vector<int> &vec, int n){
    for(int i=0; i<vec.size()-1; i++) for(int j=i+1; j<vec.size(); j++) if(vec[i]+vec[j] == n) return true;
    return false;
}
int main(){
    vector<int> vec = {5,2,11,7,15};
    int n;
    cout<<"Enter Target: "<<endl;
    cin>>n;
    (twoSum(vec,n)) ? cout<<"True" : cout<<"False";
    return 0;
}