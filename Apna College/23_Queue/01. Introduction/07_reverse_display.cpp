#include <bits/stdc++.h>
using namespace std;
//First in First out model

int main(){
    queue<int> q1;
    q1.push(98);
    q1.push(74);
    q1.push(65);
    q1.push(21);
    q1.push(17);
    q1.push(58);
    q1.push(37);

    vector<int> v;
    for(auto q = q1; !q.empty(); q.pop()) v.push_back(q.front());
    copy(v.rbegin(), v.rend(), ostream_iterator<int>(cout, " "));
    return 0;
}