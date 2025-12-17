#include<iostream>
using namespace std;

int main()
{
    int x = 15;
    int* p = &x; //int* stores hexadecimal values
    int** q = &p; //int** stores address of a pointer
    
    cout<<x<<endl;
    cout<<&x<<endl;

    cout<<p<<endl;
    cout<<*p<<endl; //*p returns the value stored in address p
    cout<<&p<<endl; //p has an address of itself as well
    
    cout<<q<<endl;
    cout<<*q<<endl; //location of address of pointer
    cout<<**q<<endl; //value stored in pointer

    return 0;
}