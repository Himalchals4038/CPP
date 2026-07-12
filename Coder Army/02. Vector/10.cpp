#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1(2, 5);
    vec1.insert(vec1.begin(), 3, 8);
    vec1.insert(vec1.end(), 2, 10);
    vec1.insert(vec1.begin(), 3, 25);

    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";
    cout<<"Index of 8: "<<find(vec1.begin(), vec1.end(), 8) - vec1.begin()<<"\n";

    // To check if an element is found, compare the result of find() with the end() iterator.
    auto it = find(vec1.begin(), vec1.end(), 19);
    if (it != vec1.end()) cout<<"Index of 19: "<<it - vec1.begin()<<"\n";
    else cout<<"Element 19 not found in the vector.\n";
    return 0;
}