#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq1;
    pq1.push(98);
    pq1.push(74);
    pq1.push(37);

    cout << "Top Element: " << pq1.top() << endl;
    //Priority Queue can't display bottom most element

    return 0;
}