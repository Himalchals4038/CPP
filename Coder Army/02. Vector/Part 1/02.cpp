#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1(2, 5);
    vec1.insert(vec1.begin(), 3, 8);
    vec1.insert(vec1.end(), 2, 10);

    cout<<"Element at index 3: "<<vec1.at(3)<<"\n";
    cout<<"Pop last element: ";
    vec1.pop_back();
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}