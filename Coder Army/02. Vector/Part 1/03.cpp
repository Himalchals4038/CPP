#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1(2, 5);
    vec1.insert(vec1.begin(), 3, 8);
    vec1.insert(vec1.end(), 2, 10);

    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";
    cout<<"Erase first 4 elements: ";
    vec1.erase(vec1.begin(), vec1.begin() + 4);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}