#include <bits/stdc++.h>
using namespace std;
class MyQueue{
private:
    stack<int> in;
    stack<int> out;

    void transfer(){
        while (!in.empty()){
            out.push(in.top());
            in.pop();
        }
    }

public:
    MyQueue() {}

    void push(int x){
        in.push(x);
    }
    
    int pop(){
        if (out.empty()) transfer();
        int ans = out.top();
        out.pop();
        return ans;
    }
    
    int peek(){
        if (out.empty()) transfer();
        return out.top();
    }
    
    bool empty(){
        return in.empty() && out.empty();
    }
};
int main(){
    
    return 0;
}