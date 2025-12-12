#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    if (a>b){
        if (a>c){
            cout<<"Greatest number is: "<<a;
        }
        else{
            cout<<"Greatest number is: "<<c;
        }
    }
    else{
        if (b>c){
            cout<<"Greatest number is: "<<b;
        }
        else{
            cout<<"Greatest number is: "<<c;
        }
        
    }
    return 0;
}