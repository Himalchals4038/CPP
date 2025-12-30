#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "Default";
    //Strings are dynamically allocated character arrays which resize in runtime
    cout<<str1<<endl;
    str1 = "New Normal";
    cout<<str1<<endl;
    
    char str2[] = "Default";
    // str2 = "New Normal"; Will return error as character array can't be modified
    return 0;
}