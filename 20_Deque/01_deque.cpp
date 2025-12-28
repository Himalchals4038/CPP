#include <bits/stdc++.h>
using namespace std;
//Doubly ended queue
int main(){
    deque<int> dq1 = {1,2,5,4,8,6,3,9,7};
    copy(dq1.begin(), dq1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}