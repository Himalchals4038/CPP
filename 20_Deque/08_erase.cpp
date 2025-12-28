#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq1 = {5,4,2,3,6,8,1,9};
    copy(dq1.begin(), dq1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    
    dq1.erase(dq1.begin());
    copy(dq1.begin(), dq1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    dq1.erase(dq1.begin()+2);
    copy(dq1.begin(), dq1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    dq1.erase(dq1.begin(), next(dq1.begin(), 2));
    copy(dq1.begin(), dq1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}