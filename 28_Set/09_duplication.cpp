#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st1 = {15, 24, 75, 84, 96, 35, 62};
    //Duplicate values are not included in set
    st1.insert(35);
    copy(st1.begin(), st1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}