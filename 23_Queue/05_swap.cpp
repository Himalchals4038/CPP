#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1;
    q1.push(98);
    q1.push(74);
    q1.push(37);
    q1.push(23);
    q1.push(19);
    q1.push(5);

    queue<int> q2;
    q2.swap(q1);

    cout<<"Is Empty(?): "<<q2.empty()<<endl;
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl<<"Is Empty(?): "<<q2.empty()<<endl;
    return 0;
}