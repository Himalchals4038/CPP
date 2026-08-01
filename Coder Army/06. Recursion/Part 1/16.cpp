#include <bits/stdc++.h>
using namespace std;
void mergeDesc(vector<int> &vec, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high){
        if (vec[left] >= vec[right]) temp.push_back(vec[left++]);
        else temp.push_back(vec[right++]);
    }

    while (left <= mid) temp.push_back(vec[left++]);
    while (right <= high) temp.push_back(vec[right++]);
    for (int i = low; i <= high; i++) vec[i] = temp[i - low];
}
void mergeSortDesc(vector<int> &vec, int low = 0, int high = -1){
    if (high == -1) high = vec.size() - 1;
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    mergeSortDesc(vec, low, mid);
    mergeSortDesc(vec, mid + 1, high);
    mergeDesc(vec, low, mid, high);
}
int main(){
    vector<int> vec ={36, 15, 49, 20, 73, 81, 55, 64, 23, 75, 10};
    mergeSortDesc(vec);
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    return 0;
}