#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "Bond";
    string str2 = "James";
    string str3 = "Harry";
    string str4 = "Bond";
    
    //Logical Operators are applicable directly
    cout<<((str1==str2) ? "True" : "False")<<endl;
    cout<<((str1==str4) ? "True" : "False")<<endl;
    
    //Can be used to determine alphabetic order
    cout<<((str1<str2) ? "True" : "False")<<endl;
    cout<<((str1<str3) ? "True" : "False")<<endl;
    
    return 0;
}