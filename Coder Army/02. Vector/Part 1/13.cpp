#include <bits/stdc++.h>
using namespace std;
void twoPointerSort(vector<int> &vec){
    int zeros_count = 0;
    for (int x : vec) if (x == 0) zeros_count++;
    for (int i=0; i<vec.size(); i++) vec[i] = (i<zeros_count) ? 0:2;
}
int main(){
    vector<int> vec1 = {2, 0, 2, 2, 0, 0, 2, 0, 2};
    twoPointerSort(vec1);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}