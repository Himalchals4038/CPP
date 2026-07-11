#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &vec, int target){
    int start = 0, end = vec.size()-1;
    while (start <= end){
        int mid = start + (end-start)/2;
        if (vec[mid] == target) return mid;
        if (vec[mid] < target) start = mid+1;
        else end = mid-1;
    }
    return -1;
}
int main(){
    vector<int> vec1 = {2, 3, 5, 6, 7, 9, 15, 24, 30, 48};
    cout<<search(vec1, 30);
    return 0;
}