#include<iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<name[0]<<endl;
    name[0] = 'N';
    name[2] = 'l';
    cout<<name;
    return 0;
}