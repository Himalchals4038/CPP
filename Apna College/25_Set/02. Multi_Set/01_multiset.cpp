#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms1 = {1, 2, 5, 4, 8, 7, 3, 6, 9, 2, 4, 5, 1};
    //Multiple instances are allowed in multisets

    copy(ms1.begin(), ms1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}