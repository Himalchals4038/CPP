#include <bits/stdc++.h>
using namespace std;
class Stack{
    vector<int> st;
public:
    void push(int c){
        st.push_back(c);
    }
    void pop(){
        if (!st.empty()) st.pop_back();
    }
    int top(){
        if (st.empty()) return -1;
        return st.back();
    }
    int size(){
        return st.size();
    }
    bool empty(){
        return st.size() == 0;
    }
};
int main(){
    Stack s;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"Topmost element: "<<s.top()<<endl;

    s.pop();
    cout<<"Topmost element: "<<s.top()<<endl;

    cout<<"Size: "<<s.size()<<endl;
    cout<<"Empty(?): "<<(s.empty() ? "True" : "False")<<endl;
    return 0;
}