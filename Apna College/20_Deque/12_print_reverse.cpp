#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq1 = {1,2,5,4,8,6,3,9,7};
    copy(dq1.rbegin(), dq1.rend(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}