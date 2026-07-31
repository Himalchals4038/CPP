#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> &vec, int key, int index){
    if (index == vec.size()) return -1;
    if (vec[index] == key) return index;
    return linearSearch(vec, key, index + 1);
}
int main(){
    vector<int> vec1 = {12, 28, 36, 44, 35, 80, 94, 17, 55};
    cout<<"Index of 80: "<<linearSearch(vec1, 80, 0);  
    return 0;
}