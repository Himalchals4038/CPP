#include <bits/stdc++.h>
using namespace std;

int main(){
    string s0 = "Initial \"Starter\" String";
    cout<<s0<<endl;

    string s1 = "Vinay Mahajan";
    cout<<"Original String: "<<s1<<endl;

    cout<<"Size of the string: "<<s1.size()<<endl;

    s1.push_back('!');
    cout<<"After push_back: "<<s1<<endl;

    s1.pop_back();
    cout<<"After pop_back: "<<s1<<endl;
    
    s1.append(" is a good boy");
    cout<<"After append: "<<s1<<endl;
    
    s1.erase(0, 6);
    cout<<"After erase: "<<s1<<endl;
    
    s1.insert(0, "Rohan ");
    cout<<"After insert: "<<s1<<endl;
    
    string s2 = "Neeraj Chopra";
    s1.swap(s2);
    cout<<"After swap: "<<s1<<endl;
    cout<<s2<<endl;

    s1.replace(0, 6, "Sunita");
    cout<<"After replace: "<<s1<<endl;

    s1.resize(10);
    cout<<"After resize to 10 length: "<<s1<<endl;

    s1.resize(20);
    cout<<"After resize to 20 length: "<<s1<<endl;

    string s3 = s1.substr(1, 7);
    cout<<"After substr 1: "<<s3<<endl;
    s3 = s1.substr(1);
    cout<<"After substr 2: "<<s3<<endl;
    s3 = s1.substr(1, 100);
    cout<<"After substr 3: "<<s3<<endl;

    reverse(s1.begin(), s1.end());
    cout<<"After reverse: "<<s1<<endl;

    s1.clear();
    cout<<"After clear: "<<s1<<endl;
    return 0;
}