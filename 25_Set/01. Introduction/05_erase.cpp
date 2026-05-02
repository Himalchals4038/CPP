#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st1 = {15, 24, 75, 84, 96, 35, 62};
    // copy(st1.begin(), st1.end(), ostream_iterator<int>(cout, " "));
    st1.erase(75);
    copy(st1.begin(), st1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}