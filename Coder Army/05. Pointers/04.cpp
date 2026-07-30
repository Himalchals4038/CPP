#include <bits/stdc++.h>
using namespace std;

int main(){
    char name = 't';
    char* ptr2 = &name;
    
    cout<<name<<endl;
    cout<<*ptr2<<endl;
    cout<<(void*)ptr2<<endl;
    cout<<(void*)&name<<endl;
    cout<<&ptr2<<endl;
    cout<<endl;
    return 0;
}