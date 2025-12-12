#include<iostream>
using namespace std;

int main()
{
    int x = 77;
    int* p = &x;
    cout<<x<<endl;
    *p = 52; //value of variable can be changed directly from its address
    cout<<x<<endl;

    return 0;
}