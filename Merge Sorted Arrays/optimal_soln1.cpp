#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m-l+1, n2 = r-m;
    vector<int> L(n1), R(n2);
    for (int i=0; i<n1; i++) L[i] = arr[l+i];
    for (int j=0; j<n2; j++) R[j] = arr[m+1+j];
    int i=0, j=0, k=l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i<n1) arr[k++] = L[i++];
    while (j<n2) arr[k++] = R[j++];
}
void mergeSort(vector<int>& arr, int l, int r) {
    if (l>=r) return;
    int m = l+(r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
vector<int> appendAndSort(vector<int> &vec1, vector<int> &vec2){
    vector<int> result;
    for (int x : vec1) if (x!=0) result.push_back(x);
    for (int x : vec2) if (x!=0) result.push_back(x);
    if (!result.empty()) mergeSort(result,0,result.size()-1);
    return result;
}
int main(){
    vector<int> vec1 = {1,2,3,0,0,0};
    vector<int> vec2 = {4,5,6};
    vector<int> vec3 = appendAndSort(vec1,vec2);
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
    return 0;
}