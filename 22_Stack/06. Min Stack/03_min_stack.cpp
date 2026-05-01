#include <bits/stdc++.h>
using namespace std;
class MinStack{
public:
    stack<long long int> st;
    long long int minVal;
    MinStack(){}
    void push(int val){
        if (st.empty()){
            st.push(val);
            minVal = val;
        }
        else{
            if (val < minVal){
                // st.push((long long)2*val-minVal);
                st.push(2*val*1LL-minVal);
                minVal = val;
            }
            else st.push(val);
        }
    }
    void pop(){
        if (st.empty()) return;
        if (st.top() < minVal) minVal = 2*minVal-st.top();
        st.pop();
    }
    int top(){
        if (st.empty()) return -1;
        if (st.top() < minVal) return minVal;
        return st.top();
    }
    int getMin(){
        if (st.empty()) return -1;
        return minVal;
    }
};
int main(){
    
    return 0;
}