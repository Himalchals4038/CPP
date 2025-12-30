#include<iostream>
using namespace std;

int main()
{
    string name = "Random";
    cout<<name.length()<<endl;
    cout<<name.size()<<endl;

    char null = '\0'; //It has ASCII value 0
    cout<<null<<endl; //It doesn't print anything but is present at the end of every string
    cout<<int(null)<<endl;
    return 0;
}