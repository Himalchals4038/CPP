#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq1;
    dq1.push_back(10);
    dq1.push_back(20);
    dq1.push_back(30);
    for (auto dq = dq1; !dq.empty(); dq.pop_back()) cout<<dq.back()<<" ";
    cout<<endl;
    for (auto it=dq1.begin(); it!=dq1.end(); it++) cout<<*it<<" ";
    cout<<endl;
    cout<<(dq1.empty() ? "Empty" : "Not Empty")<<endl;

    //Clears out the Double Ended Queue
    for (; !dq1.empty(); dq1.pop_front()) cout<<dq1.front()<<" ";
    cout<<endl;
    cout<<(dq1.empty() ? "Empty" : "Not Empty")<<endl;
    
    deque<int> dq2;
    dq2.push_front(15);
    dq2.push_front(25);
    dq2.push_front(35);
    for (auto dq = dq2; !dq.empty(); dq.pop_front()) cout<<dq.front()<<" ";
    cout<<endl;
    for (auto it=dq2.end()-1; it!=dq2.begin()-1; it--) cout<<*it<<" ";
    cout<<endl;
    cout<<(dq2.empty() ? "Empty" : "Not Empty")<<endl;
    
    //Clears out the Double Ended Queue
    for (; !dq2.empty(); dq2.pop_front()) cout<<dq2.front()<<" ";
    cout<<endl;
    cout<<(dq2.empty() ? "Empty" : "Not Empty")<<endl;
    return 0;
}