#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq1 = {5,4,2,3,6,8,1,9};
    dq1.insert(next(dq1.begin(),3), 15);
    copy(dq1.begin(), dq1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    cout<<"Size: "<<dq1.size()<<endl;
    return 0;
}