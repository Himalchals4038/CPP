#include <bits/stdc++.h>
using namespace std;
//Last in First out sequence
int main(){
    stack<int> st1;
    st1.push(98);
    st1.push(74);
    st1.push(65);

    cout<<"Topmost element: "<<st1.top()<<endl;
    for (auto s = st1; !s.empty(); s.pop()) cout << s.top() << " ";
    return 0;
}