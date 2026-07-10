#include <bits/stdc++.h>
using namespace std;
//Doubly ended queue
int main(){
    deque<int> dq1 = {1,2,5,4,8,6,3,9,7};
    copy(dq1.begin(), dq1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    
    //Random elements can be accessed directly in queues as they are formed using dynamic arrays
    cout<<dq1[3]<<endl; 
    cout<<dq1.at(2)<<endl;
    cout<<*(dq1.begin())<<endl;
    
    //Both + and next operators can be used for queues
    cout<<*(dq1.begin()+3)<<endl;
    cout<<*(next(dq1.begin(),3))<<endl;
    
    cout<<*((dq1.end())-2)<<endl;
    return 0;
}