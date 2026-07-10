#include<iostream>
using namespace std;

int main()
{
    string name = "Prasad";
    cout<<name<<endl;
    name.push_back('a'); //Adds character at the end of the string
    cout<<name<<endl;
    name.push_back('m'); //Can be used multiple times in one string
    cout<<name<<endl;
    return 0;
}