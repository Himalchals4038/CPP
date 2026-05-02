#include <bits/stdc++.h>
#include <random>
#include <ctime>
using namespace std;
int partition (vector<int> &vec, int start, int end){
    // 'static' ensures the generator is seeded only once for better performance.
    static mt19937 rng(time(nullptr));
    uniform_int_distribution<int> dist(start, end);
    int random_pivot_index = dist(rng);
    swap(vec[random_pivot_index], vec[end]);

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
    while (start<end){
        int idx=partition(vec, start, end);
        if (idx-start < end-idx){
            qSort(vec, start, idx - 1);
            start = idx+1; // Eliminate tail call by looping on the larger partition
        } else{
            qSort(vec, idx+1, end);
            end = idx-1;   // Eliminate tail call by looping on the larger partition
        }
    }
}
void quickSort(vector<int> &vec){
    qSort(vec,0,vec.size()-1);
}
int main(){
    vector<int> vec = {5,2,6,4,1,3};
    quickSort(vec);
    for (int x : vec) cout<<x<<" ";
    cout << endl;
    return 0;
}