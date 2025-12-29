#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1 = {5, 4, 8, 6, 3, 2, 12, 7};
    cout<<"Max element in the vector: "<<*max_element(vec1.begin(), vec1.end())<<endl;
    cout<<"Min element in the vector: "<<*min_element(vec1.begin(), vec1.end())<<endl;
    return 0;
}