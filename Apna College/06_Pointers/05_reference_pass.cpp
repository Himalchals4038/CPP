#include <bits/stdc++.h>
using namespace std;
void change1(int ptr){
    ptr = 25;
}
void change2(int* ptr){
    *ptr = 25;
}
void change3(int &ptr){
    ptr = 25;
}
int main(){
    int a = 15; //Pass by value
    change1(a);
    cout<<a<<endl;
    int b = 15; //Pass by reference
    change2(&b);
    cout<<b<<endl;
    int c = 15; //Pass by reference
    change3(c);
    cout<<c<<endl;
    return 0;
}