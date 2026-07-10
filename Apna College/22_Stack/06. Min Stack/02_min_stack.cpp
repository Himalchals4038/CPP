#include <bits/stdc++.h>
using namespace std;
class MinStack{
public:
    stack<int> mainStack;
    stack<int> minStack;
    MinStack(){}
    void push(int val) {
        mainStack.push(val);
        if (minStack.empty() || val <= minStack.top()) minStack.push(val);
    }
    void pop(){
        if (mainStack.empty()) return;
        if (mainStack.top() == minStack.top()) minStack.pop();
        mainStack.pop();
    }
    int top(){
        if (mainStack.empty()) return -1;
        return mainStack.top();
    }
    int getMin(){
        if (minStack.empty()) return -1;
        return minStack.top();
    }
};

int main(){
    return 0;
}