#include <bits/stdc++.h>
using namespace std;
int minNum(vector<int> vec, int index, int min){
    if (index == vec.size()) return min;
    if (vec[index] < min) min = vec[index];
    return minNum(vec, index + 1, min);
}
int minNum_helper(vector<int> vec){
    if (vec.size() == 0) throw invalid_argument("Empty vector");
    if (vec.size() == 1) return vec[0];
    return minNum(vec, 0, INT_MAX);
}
int main(){
    vector<int> myVec = {72, 83, 59, 21, 66, 34};
    cout<<minNum_helper(myVec)<<endl;
    myVec = {};
    try{
        cout<<minNum_helper(myVec)<<endl;
    }
    catch(const invalid_argument& e){
        cout<<e.what()<<endl;
    }
    myVec = {1};
    cout<<minNum_helper(myVec)<<endl;
    return 0;
}