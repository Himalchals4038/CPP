#include <bits/stdc++.h>
using namespace std;
int peak(vector<int> &vec){
    if (vec.size()<3) return -1;
    for (int i=1; i < vec.size()-1; i++){
        if (vec[i] > vec[i-1] && vec[i] > vec[i+1]) return vec[i];
    }
    return -1;
}
int main(){
    vector<int> vec = {0, 2, 4, 7, 9, 11, 23, 15, 10, 6, 3, 1};
    cout << "Peak: " << peak(vec) << endl;
    return 0;
}