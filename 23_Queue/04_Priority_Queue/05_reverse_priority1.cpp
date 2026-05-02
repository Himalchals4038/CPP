#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> pq1;
    //Arranges elements in the descending order from top to bottom instead of usual ascending order

    pq1.push(98);
    pq1.push(74);
    pq1.push(37);
    pq1.push(12);
    pq1.push(54);
    pq1.push(60);
    pq1.push(43);

    for(auto pq = pq1; !pq.empty(); pq.pop()) cout<<pq.top()<<" ";
    return 0;
}