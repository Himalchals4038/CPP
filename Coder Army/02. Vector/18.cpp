#include <bits/stdc++.h>
using namespace std;
pair<int, int> findPairWithDifference(vector<int>& vec, int n){
    sort(vec.begin(), vec.end());
    int i = 0;
    int j = 1;
    int size = vec.size();
    while (i<size && j<size){
        if (i != j && vec[j]-vec[i] == n) return {vec[i], vec[j]};
        else if (vec[j]-vec[i] < n) j++;
        else i++;
    }
    return {-1, -1};
}
int main(){
    vector<int> vec1 = {5, 20, 3, 2, 50, 80};
    pair<int, int> result = findPairWithDifference(vec1, 78);
    cout<<"Pair: "<<result.first<<", "<<result.second<<endl;
    return 0;
}