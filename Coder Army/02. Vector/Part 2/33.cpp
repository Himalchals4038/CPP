#include <bits/stdc++.h>
using namespace std;
int maxDiffOptimized(const vector<int> &vec){
    if (vec.empty()) return 0;
    int max_so_far = INT_MIN;
    int max_difference = INT_MIN;
    for (int element : vec){
        max_so_far = max(max_so_far, element);
        max_difference = max(max_difference, max_so_far - element);
    }
    return max_difference;
}
int main(){
    vector<int> vec1 = {9, 5, 8, 12, 2, 3, 7, 4};
    cout<<"Max Difference: "<<maxDiffOptimized(vec1);
    return 0;
}