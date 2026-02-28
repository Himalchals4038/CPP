#include <bits/stdc++.h>
using namespace std;
bool pal(int n){
    int rev = 0, temp = n;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    return temp == rev;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Is Palindrome: "<<(pal(n) ? "Yes" : "No");
    return 0;
}