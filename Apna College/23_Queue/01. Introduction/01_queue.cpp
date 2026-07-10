#include <bits/stdc++.h>
using namespace std;
//First in First out model

int main(){
    queue<int> q1;
    q1.push(98);
    q1.push(74);
    q1.push(65);
    for (auto q = q1; !q.empty(); q.pop()) cout<<q.front()<<" ";
    cout<<endl;

    //Alternate way to display elements of the queue
    vector<int> v;
    for(auto q = q1; !q.empty(); q.pop()) v.push_back(q.front());
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    return 0;
}