#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st1;
    st1.push(85);
    st1.push(26);
    st1.push(40);
    st1.push(75);
    st1.push(82);
    st1.push(74);
    st1.push(65);

    //Swap functions swaps the contents of both stacks
    stack<int> st2;
    st2.swap(st1);
    
    cout<<"Size of st1: "<<st1.size()<<endl;
    cout<<"Size of st2: "<<st2.size()<<endl;

    st2.pop();
    st2.pop();
    st2.pop();

    // while(!st2.empty()){
    //     cout<<st2.top()<<" ";
    //     st2.pop();
    // }
    for(;!st2.empty(); st2.pop()); cout<<st2.top()<<" ";
    return 0;
}