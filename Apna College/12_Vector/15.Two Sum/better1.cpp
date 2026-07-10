#include <bits/stdc++.h>
using namespace std;
bool twoSum(vector<int> &vec, int n){
    sort(vec.begin(),vec.end());
    int low = 0, high = vec.size()-1;
    while(low<high){
        if(vec[low]+vec[high]==n) return true;
        else if(vec[low]+vec[high]>n) high--;
        else low++;
    }
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