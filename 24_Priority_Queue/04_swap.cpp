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

    priority_queue<int> pq2;
    pq2.swap(pq1);

    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }

    return 0;
}