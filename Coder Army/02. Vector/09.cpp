#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1(2, 5);
    vec1.insert(vec1.begin(), 3, 8);
    vec1.insert(vec1.end(), 2, 10);

     //Sort vector in ascending order before applying binary search
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";
    cout<<"Binary Search for 8: "<<(binary_search(vec1.begin(), vec1.end(), 8, greater<int>()) ? "Yes" : "No")<<"\n";
    cout<<"Binary Search for 19: "<<(binary_search(vec1.begin(), vec1.end(), 19, greater<int>()) ? "Yes" : "No")<<"\n";
    return 0;
}