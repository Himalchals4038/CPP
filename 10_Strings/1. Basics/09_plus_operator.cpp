#include<iostream>
using namespace std;

int main()
{
    string name = "Sajal";
    cout<<name<<" "<<name.length()<<endl;
    name+=" Sinha";
    cout<<name<<" "<<name.length()<<endl;
    name="Shri "+name;
    cout<<name<<" "<<name.length()<<endl;
    return 0;
}