#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN, curSum=0;
    for (int i=0;i<vec.size();i++){
        curSum += vec[i];
        maxSum = max(curSum,maxSum);
        if (curSum<0) curSum = 0;
        }
    cout<<"Maximum Sum Value: "<<maxSum<<endl;
    return 0;
}