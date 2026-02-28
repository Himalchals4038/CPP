#include <bits/stdc++.h>
using namespace std;
int reverseWithStrings(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoi(s); 
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Is Palindrome: "<<(reverseWithStrings(n) == n ? "Yes" : "No");
    return 0;
}