#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &vec, int low, int high){
    int pos = low;
    for (int i=low; i<=high; i++){
        if (vec[i] <= vec[high]){
            swap(vec[i], vec[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quickSort(vector<int> &vec, int low = 0, int high = -1){
    if (high == -1) high = vec.size() - 1;
    if (low >= high) return;
    int pivot = partition(vec, low, high);
    quickSort(vec, low, pivot-1);
    quickSort(vec, pivot + 1, high);
}
int main(){
    vector<int> vec = {36, 15, 49, 20, 73, 81, 55, 64, 23, 75, 10};
    quickSort(vec);
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    return 0;
}