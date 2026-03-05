#include <bits/stdc++.h>
using namespace std;
int subArray (vector<int> &vec, int n){
    int count = 0;
    for (int i=0;i<vec.size();i++){
        int sum=0;
        for (int j=i;j<vec.size();j++){
            sum+=vec[j];
            if (sum==n) count++;
        }
    }
    return count;
}
int main(){
    vector<int> vec = {9,4,20,3,10,5,12,10};
    int n;
    cout<<"Enter Target: ";
    cin>>n;
    cout<<"No. of Sub Arrays: "<<subArray(vec,n);
    return 0;
}