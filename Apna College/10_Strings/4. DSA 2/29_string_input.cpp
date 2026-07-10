#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1;
    getline(cin, str1); //Without delimiter
    cout<<str1<<endl;
    
    string str2;
    getline(cin, str2, '.'); //With delimiter
    cout<<str2<<endl;
    return 0;
}