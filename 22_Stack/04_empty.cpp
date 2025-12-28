#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st1;
    st1.push(98);
    st1.push(34);
    st1.push(55);
    st1.push(16);
    st1.push(82);
    st1.push(74);
    st1.push(65);

    st1.pop();
    st1.pop();
    st1.pop();

    //Checks if the stack is empty and returns 1 if true
    cout<<"Is Empty(?): "<<st1.empty()<<endl;

    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();
    }
    return 0;
}