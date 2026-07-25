#include <bits/stdc++.h>
using namespace std;
int maxDiff(vector<int> &vec, int index){
    int maxDiff = INT_MIN;
    for (int i=index+1; i<vec.size(); i++) maxDiff = max(maxDiff, abs(vec[i]-vec[index]));
    return maxDiff;
}
int main(){
    vector<int> vec1 = {9, 5, 8, 12, 2, 3, 7, 4};
    cout<<"Max difference: "<<maxDiff(vec1, 1)<<endl;
    return 0;
}