#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    (n%2==0)? cout<<"Even number" : cout<<"Odd number";
    return 0;
}