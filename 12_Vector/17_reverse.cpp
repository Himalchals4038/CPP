#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {5, 4, 5, 8, 9, 7, 6};
    reverse(vec.begin(), vec.end());
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    return 0;
}