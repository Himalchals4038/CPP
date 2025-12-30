#include <bits/stdc++.h>
using namespace std;
void isPalindrome(string str){
    string cleanStr="";
    for (char c:str){
        if ((c>='a' && c<='z') || (c>='0' && c<='9')) cleanStr+=c;
        else if (c>='A' && c<='Z') cleanStr+=(c-'A'+'a');
    }
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