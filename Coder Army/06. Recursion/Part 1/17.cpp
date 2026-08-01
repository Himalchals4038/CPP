#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &vec, int low, int high){
    int pivot = vec[low];
    int i = low - 1;
    int j = high + 1;
    while (true){
        do{ i++; } while (vec[i] < pivot);
        do{ j--; } while (vec[j] > pivot);
        if (i >= j) return j;
        swap(vec[i], vec[j]);
    }
}
void quickSort(vector<int> &vec, int low = 0, int high = -1){
    if (high == -1) high = vec.size() - 1;
    if (low >= high) return;
    int p_index = partition(vec, low, high);
    quickSort(vec, low, p_index);
    quickSort(vec, p_index + 1, high);
}
int main(){
    vector<int> vec = {36, 15, 49, 20, 73, 81, 55, 64, 23, 75, 10};
    quickSort(vec);
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    return 0;
}