#include <bits/stdc++.h>
using namespace std;
class MyStack{
private:
    queue<int> q;
    
public:
    MyStack(){}
    
    void push(int x){
        q.push(x);
        int n = q.size()-1;
        for (int i=0; i<n; i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop(){
        int ans = q.front();
        q.pop();
        return ans;
    }
    
    int top(){
        return q.front();
    }
    
    bool empty(){
        return q.empty();
    }
};

int main(){
    
    return 0;
}