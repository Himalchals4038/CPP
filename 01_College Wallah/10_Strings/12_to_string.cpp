#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    string s = to_string(num);
    cout<<s<<" "<<s.length()<<endl;
    s = s+"david";
    cout<<s<<" "<<s.length()<<endl;
    return 0;
}