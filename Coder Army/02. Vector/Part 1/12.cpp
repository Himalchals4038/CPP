#include <bits/stdc++.h>
using namespace std;
void twoPointerSort(vector<int> &vec){
    int low = 0, mid = 0;
    int high = vec.size() - 1;
    while (mid <= high){
        if (vec[mid] == 0){
            swap(vec[low], vec[mid]);
            low++;
            mid++;
        }
        else{
            swap(vec[mid], vec[high]);
            high--;
        }
    }
}
int main(){
    vector<int> vec1 = {2, 0, 2, 2, 0, 0, 2, 0, 2};
    twoPointerSort(vec1);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}