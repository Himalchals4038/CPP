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

    cout << "Top Element: " << pq1.top() << endl;
    //Priority Queue can't display bottom most element
    
    //Displays all the elements in the queue in descending order
    for (auto pq = pq1; !pq.empty(); pq.pop()) cout << pq.top() << " ";
    cout<<endl;
    
    //Alternate method to display queue elements in descending order
    vector<int> v;
    for (auto pq = pq1; !pq.empty(); pq.pop()) v.push_back(pq.top());
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}