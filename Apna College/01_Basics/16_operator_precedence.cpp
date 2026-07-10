#include<iostream>
using namespace std;

int main()
{
    //Computer operates from left to right for (add & subtract), (multiply & divide)
    //Precedence given to (multiply & divide) over (add and subtract)
    cout<<15*8/3<<endl;
    cout<<15/8*3<<endl;
    cout<<15-8/3<<endl;
    cout<<15/8-3<<endl;
    return 0;
}