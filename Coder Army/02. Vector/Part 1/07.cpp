#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1(2, 5);
    vec1.insert(vec1.begin(), 3, 8);
    vec1.insert(vec1.end(), 2, 10);

    //Sort vector in ascending order
    cout<<"Elements in ascending order: ";
    sort(vec1.begin(), vec1.end());
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";

    //Sort vector in descending order
    // sort(vec1.begin(), vec1.end(), greater<int>());
    cout<<"Elements in descending order: ";
    reverse(vec1.begin(), vec1.end());
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}