#include <bits/stdc++.h>
using namespace std;
vector<int> selectionSort(vector<int> &vec){
    int n = vec.size();
    for (int i=0; i<n-1; i++){
        int min = i;
        for (int j = i+1; j<n; j++) if (vec[j] < vec[min]) min = j;
        swap(vec[i], vec[min]);
    }
    return vec;
}
int main(){
    vector<int> vec = {15, 21, 41, 76, 91, 82, 36, 57, 10, 24, 73};
    vector<int> res = selectionSort(vec);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    return 0;
}