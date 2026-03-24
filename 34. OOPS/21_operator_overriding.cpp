#include <bits/stdc++.h>
using namespace std;
class Parent{
public:
    void getInfo(){
        cout<<"Parent Class"<<endl;
    }
    virtual void greet(){
        cout<<"Good Morning, Parent"<<endl;
    }
};
class Child : public Parent{
public:
    void getInfo(){
        cout<<"Child Class"<<endl;
    }
    void greet(){
        cout<<"Good Morning, Child"<<endl;
    }
};
int main(){
    Parent p;
    Child c;
    p.getInfo();
    c.getInfo();
    //Virtual function is meant to be overriden in child classes
    c.greet(); 
    return 0;
}