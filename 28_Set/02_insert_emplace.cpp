#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st1 = {15, 24, 75, 84, 96, 35, 62};
    st1.insert(28);
    st1.emplace(11);
    copy(st1.begin(), st1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}