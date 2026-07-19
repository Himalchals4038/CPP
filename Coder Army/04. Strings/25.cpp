#include <bits/stdc++.h>
using namespace std;
string addStrings1(string num1, string num2){
    int i = stoi(num1), j = stoi(num2);
    return to_string(i + j);
}
string addStrings2(string num1, string num2){
    stringstream ss;
    ss<<stoi(num1) + stoi(num2);
    return ss.str();
}
int main(){
    string num1 = "123", num2 = "456";
    cout<<addStrings1(num1, num2)<<endl;
    cout<<addStrings2(num1, num2)<<endl;
    return 0;
}