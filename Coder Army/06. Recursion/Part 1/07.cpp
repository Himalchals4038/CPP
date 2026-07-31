#include <bits/stdc++.h>
using namespace std;
int vectorSum(const vector<int>& vec, int index){
    if (index == vec.size()) return 0;
    return vec[index] + vectorSum(vec, index + 1);
}
// Alternative recursive function by creating sub-vectors (less efficient)
int vectorSumByCopy(vector<int> vec) {
    if (vec.empty()) return 0;
    int firstElement = vec.front();
    return firstElement + vectorSumByCopy(vector<int>(vec.begin() + 1, vec.end()));
}
int main(){
    vector<int> myVec = {72, 83, 59, 21, 66, 34};
    cout<<"The sum using an index is: "<<vectorSum(myVec, 0)<<endl;
    cout<<"The sum using sub-vectors is: "<<vectorSumByCopy(myVec)<<endl;
    return 0;
}