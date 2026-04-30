#include <bits/stdc++.h>
using namespace std;
class Stack{
    list<int> ll;
public:
    void push(int c){
        ll.push_front(c);
    }
    void pop(){
        if (!ll.empty()) ll.pop_front();
    }
    int top(){
        if (ll.empty()) return -1;
        return ll.front();
    }
    int size(){
        return ll.size();
    }
    bool empty(){
        return ll.size() == 0;
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