#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(5,0);
    for (int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<char> vec1={'a','b','c','d','e'};
    for (char i:vec1){ //interpreted as character i in vector vec1, not index number
        cout<<i<<" ";
    }
    return 0;
}