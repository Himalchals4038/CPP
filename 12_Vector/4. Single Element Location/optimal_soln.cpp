#include <bits/stdc++.h>
using namespace std;
int inst(vector<int> &vec){
    sort(vec.begin(), vec.end());
    if (vec.size() == 1) return vec[0];
    if (vec[0] != vec[1]) return vec[0];
    if (vec.back() != vec[vec.size()-2]) return vec.back();

    int start = 1, end = vec.size()-2;
    while (start <= end){
        int mid = start + (end-start)/2;
        if (vec[mid] != vec[mid-1] && vec[mid] != vec[mid+1]) return vec[mid];
        if ((mid%2 == 0 && vec[mid] == vec[mid+1])||(mid%2 == 1 && vec[mid] == vec[mid-1])) start = mid+1;
        else end = mid-1;
    }
    return -1;
}
int main(){
    vector<int> vec = {9,8,7,6,5,7,3,2,1,1,5,4,6,2,4,3,9}; //1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,9,9
    cout<<"Index: "<<inst(vec)<<endl;
    return 0;
}