#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter first number";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    cout<<"Mod(x,y): "<<x%y<<endl;

    cout<<"Mod(8,-3): "<<8%(-3)<<endl;
    cout<<"Mod(-8,3): "<<(-8)%3<<endl;
    cout<<"Mod(-8,-3): "<<(-8)%(-3)<<endl;

    return 0;
}