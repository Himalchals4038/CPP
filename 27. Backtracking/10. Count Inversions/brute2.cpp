#include <bits/stdc++.h>
using namespace std;
long long merge(vector<int> &vec, int start, int mid, int end){
    vector<int> temp;
    temp.reserve(end-start+1);
    int i=start, j=mid+1;
    long long count=0;
    while (i<=mid && j<=end){
        if (vec[i]<=vec[j]) temp.push_back(vec[i++]);
        else temp.push_back(vec[j++]); count+=(mid-i+1);
    }
    while (i<=mid) temp.push_back(vec[i++]);
    while (j<=end) temp.push_back(vec[j++]);
    for (int k=0; k<temp.size(); k++) vec[start+k] = temp[k];
    return count;
}
long long mergeSort(vector<int> &vec, int start, int end){
    if (start>=end) return 0;
    int mid = start+(end-start)/2;
    return mergeSort(vec, start, mid) + mergeSort(vec, mid+1, end) + merge(vec, start, mid, end);
}
int countInversions(vector<int> &vec){
    return mergeSort(vec, 0, (int)vec.size()-1);
}
int main(){
    vector<int> vec = {6,3,5,2,7};
    cout<<"No. of inversions: "<<countInversions(vec)<<endl;
    return 0;
}