#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq1;
    pq1.push(98);
    pq1.push(74);
    pq1.push(37);
    pq1.push(12);
    pq1.push(54);
    pq1.push(60);
    pq1.push(43);

    vector<int> v;
    for (auto pq = pq1; !pq.empty(); pq.pop()) v.push_back(pq.top());
    for (auto it = v.rbegin(); it != v.rend(); ++it) cout << *it << " ";
    //Displays all the elements in ascending order
    return 0;
}