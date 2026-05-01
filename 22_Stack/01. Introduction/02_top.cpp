#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st1;
    st1.push(98);
    st1.push(74);
    st1.push(65);

    //Displays the outermost element in the stack
    cout<<"Topmost element: "<<st1.top()<<endl;
    return 0;
}