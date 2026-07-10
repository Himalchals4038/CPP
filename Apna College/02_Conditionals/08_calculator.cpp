#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    float n1;
    cin>>n1;
    char op;
    cin>>op;
    float n2;
    cin>>n2;
    if (op=='+') cout<<n1+n2;
    if (op=='-') cout<<n1-n2;
    if (op=='*') cout<<n1*n2;
    if (op=='/') cout<<n1/n2;
    return 0;
}