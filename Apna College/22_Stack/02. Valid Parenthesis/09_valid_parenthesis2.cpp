#include <bits/stdc++.h>
using namespace std;
bool isValidParenthesis(const string& s){
    if (s.length()%2 != 0) return false;
    stack<char> st;
    for (char c:s){
        if (c == '(' || c == '{' || c == '[') st.push(c);
        else{
            if (st.empty()) return false;
            if (c == ')' && st.top() != '(') return false;
            if (c == '}' && st.top() != '{') return false;
            if (c == ']' && st.top() != '[') return false;
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    string s1 = "[{({})}]";
    cout<<(isValidParenthesis(s1) ? "True" : "False")<<endl;
    return 0;
}