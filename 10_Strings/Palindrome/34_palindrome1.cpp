#include <bits/stdc++.h>
using namespace std;
void isPalindrome(string str){
    for (int i=0;i<str.length()/2;i++){
        if (str[i]!=str[str.length()-1-i]){
            cout<<"Not Palindrome"<<endl;
            return;
        }
    }
    cout<<"Palindrome"<<endl;
}
int main(){
    string str1 = "Malayalam";
    isPalindrome(str1);
    string str2 = "racecar";
    isPalindrome(str2);
    return 0;
}