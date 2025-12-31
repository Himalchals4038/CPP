#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1 = {5, 4, 8, 6, 3, 0};
    vector<int> vec2 = {5, 4, 8, 6, 3, 0};

    //Sort in ascending order
    sort(vec1.begin(), vec1.end());
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    //Sort in descending order (Method 1)
    sort(vec1.begin(), vec1.end(), greater<int>());
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    //Sort in descending order (Method 2)
    sort(vec1.rbegin(), vec1.rend());
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}