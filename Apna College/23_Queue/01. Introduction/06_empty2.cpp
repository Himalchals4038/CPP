#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1;
    q1.push(98);
    q1.push(74);
    q1.push(37);
    cout<<"Is Empty(?): "<<(q1.empty() ? "Yes" : "No")<<endl;
    
    for(; !q1.empty(); q1.pop()) cout<<q1.front()<<" ";
    cout<<endl;
    cout<<"Is Empty(?): "<<(q1.empty() ? "Yes" : "No")<<endl;
    return 0;
}