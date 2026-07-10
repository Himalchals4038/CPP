#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_multiset<int> ms1 = {1, 2, 5, 4, 8, 7, 3, 6, 9, 2, 4, 5, 1};
    //Elements are stored in random fashion but similar units are conglomerated together
    return 0;
    copy(ms1.begin(), ms1.end(), ostream_iterator<int>(cout, " "));
}