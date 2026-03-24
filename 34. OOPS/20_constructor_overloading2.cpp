#include <bits/stdc++.h>
using namespace std;
class Print{
    public:
    void show(int a){
        cout<<"Int: "<<a<<endl;
    }
    void show(string a){
        cout<<"String: "<<a<<endl;
    }
    void show(double a){
        cout<<"Double: "<<a<<endl;
    }
    void show(char a){
        cout<<"Char: "<<a<<endl;
    }
    void show(bool a){
        cout<<"Bool: "<<a<<endl;
    }
};
int main(){
    Print p;
    p.show(10);
    p.show("Parmesh");
    p.show(63.547);
    p.show('}');
    p.show(true);
    return 0;
}