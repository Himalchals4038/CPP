#include<iostream>
using namespace std;
//the & after int works as pass reference
void swap1(int& x, int& y){
    x = x+y;
    y = x-y;
    x = x-y;
}
void swap2(int& a, int& b){
    int c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    
    // swap1(a,b);
    swap2(a,b);
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    return 0;
}