#include <bits/stdc++.h>
using namespace std;
vector<int> sortArray(vector<int> &vec){
    int mid = 0, high = vec.size()-1, low = 0;
    while(mid<=high){
        if (vec[mid]==0){
            swap(vec[mid], vec[low]);
            mid++;
            low++;
        }
        else if (vec[mid]==1) mid++;
        else{
            swap(vec[mid], vec[high]);
            high--;
        }
    }
    return vec;
}
int main(){
    vector<int> vec = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    vector<int> res = sortArray(vec);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    return 0;
}