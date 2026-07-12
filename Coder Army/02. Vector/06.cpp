#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1(2, 5);
    vec1.insert(vec1.begin(), 3, 8);
    vec1.insert(vec1.end(), 2, 10);

    //Display all elements by iterator pointers
    cout<<"Elements in iterator pointers: ";
    for (auto it = vec1.begin(); it != vec1.end(); it++) cout<<*it<<" ";
    cout<<"\n";

    //Display all elements by reverse iterator pointers
    cout<<"Elements in reverse iterator pointers: ";
    for (auto it = vec1.rbegin(); it != vec1.rend(); it++) cout<<*it<<" ";
    return 0;
}