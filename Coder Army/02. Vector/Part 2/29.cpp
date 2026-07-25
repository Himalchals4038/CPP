#include <bits/stdc++.h>
using namespace std;
int kadane(vector<int> &vec){
    if (vec.empty()) return 0;
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i=0; i<vec.size(); i++){
        currSum += vec[i];
        maxSum = max(maxSum, currSum);
        if (currSum<0) currSum = 0;
    }
    return maxSum;
}
int main(){
    vector<int> vec = {1, -2, 3, 10, -4, 7, 2, -5};
    cout<<kadane(vec);
    return 0;
}