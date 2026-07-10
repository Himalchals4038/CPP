#include <bits/stdc++.h>
using namespace std;
//vec.end() comes just after the last element in the vector
//vec.rend() comes just before the first element in the vector
int main(){
    vector<int> vec = {5,4,2,3,6,8,1,9};
    // vector<int>::iterator it;
    for (auto it=vec.begin(); it!=vec.end(); it++) cout<<*it<<" "; //Displays array in ascending order
    cout<<endl;
    for (auto it = vec.rbegin(); it!=vec.rend(); it++) cout<<*it<<" "; //Displays array in descending order
    cout<<endl;
    return 0;
}