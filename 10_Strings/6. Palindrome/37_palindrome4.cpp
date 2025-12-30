#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string str){
    for (int start=0, end=str.length()-1; start<end; ) {
        if (!isalnum(str[start])) start++;
        else if (!isalnum(str[end])) end--;
        else if (tolower(str[start]) != tolower(str[end])){
            cout<<"Not Palindrome"<<endl;
            return;
        } else{
            start++;
            end--;
        }
    }
    cout<<"Palindrome"<<endl;
}
int main(){
    string str1 = "A man, a plan, a canal: Panama";
    isPalindrome(str1);
    string str2 = "racecar";
    isPalindrome(str2);
    return 0;
}