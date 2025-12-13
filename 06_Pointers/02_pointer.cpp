#include<iostream>
using namespace std;

int main()
{
    int x = 15;
    int* p = &x; //int* stores hexadecimal values
    int *q = &x; //a different way to store address
    
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    
    cout<<x<<endl;
    cout<<*p<<endl; //*p returns the value stored in address p
    cout<<&p<<endl; //p has an address of itself as well

    return 0;
}