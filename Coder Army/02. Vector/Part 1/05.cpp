#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1(2, 5);
    vec1.insert(vec1.begin(), 3, 8);
    vec1.insert(vec1.end(), 2, 10);

    //Display all elements by direct referencing
    cout<<"Elements: ";
    for (auto i:vec1) cout<<i<<" ";
    return 0;
}