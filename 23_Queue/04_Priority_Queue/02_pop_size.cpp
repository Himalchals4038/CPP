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
    cout<<"Top Element: "<<pq1.top()<<endl;
    cout<<"Size: "<<pq1.size()<<endl;
    
    pq1.pop();
    pq1.pop();
    pq1.pop();
    cout<<"Top Element: "<<pq1.top()<<endl;
    cout<<"Size: "<<pq1.size()<<endl;
    return 0;
}