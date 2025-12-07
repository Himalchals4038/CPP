#include<iostream>
#include<algorithm>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Sum of both numbers: "<<sum(a,b);
    return 0;
}