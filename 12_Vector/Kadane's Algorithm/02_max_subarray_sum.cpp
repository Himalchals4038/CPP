#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN, curSum;
    for (int i=0;i<vec.size();i++){
        curSum = 0;
        for (int j=i;j<vec.size();j++){
            curSum += vec[j];
            maxSum = max(curSum,maxSum);
        }
        // cout<<curSum<<endl;
    }
    cout<<"Maximum Sum Value: "<<maxSum<<endl;
    return 0;
}