#include <bits/stdc++.h>
using namespace std;
void twoPointerSort(vector<int> &vec){
    int start = 0, end = vec.size()-1;
    while(start<end){
        if (vec[start] == 0) start++;
        else{
            if (vec[end]==0){
                swap(vec[start], vec[end]);
                start++, end--;
            }
            else end--;
        }
    }
}
int main(){
    vector<int> vec1 = {2, 0, 2, 2, 0, 0, 2, 0, 2};
    twoPointerSort(vec1);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}