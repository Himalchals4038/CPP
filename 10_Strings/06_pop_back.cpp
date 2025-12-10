#include<iostream>
using namespace std;

int main()
{
    string name = "Manoj";
    cout<<name<<endl;
    name.pop_back(); //removes one character from the end of the string
    cout<<name<<endl;
    name.pop_back(); //can be used multiple times
    cout<<name<<endl;
    return 0;
}