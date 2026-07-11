#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &vec, int target){
    int start = 0, end = vec.size()-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if (vec[mid]==target) return mid;
        else if (vec[mid]>=vec[0]){
            if (target>=vec[0] && target<vec[mid]) end = mid-1;
            else start = mid+1;
        }
        else{
            if (target>vec[mid] && target<=vec[end]) start = mid+1;
            else end = mid-1;
        }
    }
    return -1;
}
int main(){
    
    return 0;
}