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
    switch(op){
        case '+': 
            cout<<n1+n2<<endl;
            break;
        case '-': 
            cout<<n1-n2<<endl;
            break;
        case '*': 
            cout<<n1*n2<<endl;
            break;
        case '/': 
            cout<<n1/n2<<endl;
            break;
        default: 
            cout<<"Invalid Operator"<<endl;
    }
    return 0;
}