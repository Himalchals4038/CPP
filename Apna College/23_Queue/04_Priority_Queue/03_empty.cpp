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

    //Displays elements in descending order
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }

    return 0;
}