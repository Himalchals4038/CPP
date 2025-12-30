#include <bits/stdc++.h>
using namespace std;
vector<int> insertionSort(vector<int> &vec){
    int n = vec.size();
    for (int i=1; i<n; i++){
        int curr = vec[i], prev = i-1;
        while (prev >= 0 && curr < vec[prev]){
            vec[prev+1] = vec[prev];
            prev--;
        }
        vec[prev + 1] = curr;
    }
    return vec;
}
int main(){
    vector<int> vec = {15, 21, 41, 76, 91, 82, 36, 57, 10, 24, 73};
    vector<int> res = insertionSort(vec);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    return 0;
}