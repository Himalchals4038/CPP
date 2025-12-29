#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1;
    q1.push(98);
    q1.push(74);
    q1.push(37);

    cout<<"Is Empty(?): "<<q1.empty()<<endl;
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl<<"Is Empty(?): "<<q1.empty()<<endl;
    return 0;
}