#include<iostream>
using namespace std;

int main()
{
    string name = "Suresh";
    cout<<name<<endl; 
    name.append(" Narayan"); //appends at the end of the string
    cout<<name<<endl;
    name.append(" Bansali");
    cout<<name<<endl;
    cout<<name.length()<<endl;

    return 0;
}