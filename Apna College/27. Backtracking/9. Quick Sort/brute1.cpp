#include <bits/stdc++.h>
using namespace std;
int partition (vector<int> &vec, int start, int end){
    int pivot = vec[end];
    int idx = start-1;
    for (int i=start;i<end;i++){
        if (vec[i]<=pivot){
            idx++;
            swap(vec[idx],vec[i]);
        }
    }
    idx++;
    swap(vec[idx], vec[end]);
    return idx;
}
void qSort(vector<int> &vec, int start, int end){
    if (start >= end) return;
    int idx = partition(vec,start,end);
    qSort(vec,start,idx-1);
    qSort(vec,idx+1,end);
    return;
}
void quickSort(vector<int> &vec){
    qSort(vec,0,vec.size()-1);
    return;
}
int main(){
    vector<int> vec = {5,2,6,4,1,3};
    quickSort(vec);
    for (int x : vec) cout<<x<<" ";
    return 0;
}