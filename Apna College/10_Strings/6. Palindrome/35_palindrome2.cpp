#include <bits/stdc++.h>
using namespace std;
//Remove any non-alphanumeric characters and changes uppercase letters to lowercase
void isPalindrome(string str){
    string cleanStr="";
    for (char c:str) if (isalnum(c)) cleanStr+=tolower(c);
    for (int i=0;i<cleanStr.length()/2;i++){
        if (cleanStr[i]!=cleanStr[cleanStr.length()-1-i]){
            cout<<"Not Palindrome"<<endl;
            return;
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