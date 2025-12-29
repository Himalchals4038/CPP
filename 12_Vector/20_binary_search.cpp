#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1 = {5, 4, 8, 6, 3, 2, 12, 7};
    cout<<"Is 12 present(?): "<<(binary_search(vec1.begin(), vec1.end(), 12) ? "Yes" : "No")<<endl;
    return 0;
}