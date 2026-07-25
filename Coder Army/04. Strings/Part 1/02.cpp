#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "First Name";
    cout<<s1;
    cout<<"\n";
    string s2 = "Last Name";
    cout<<s1 + " " + s2;
    cout<<"\n";

    char name[20];
    cout<<"Enter your name: ";
    cin.getline(name, 20);
    cout<<"Your name is: "<<name<<endl;
    return 0;
}