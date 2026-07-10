#include<iostream>
using namespace std;
int fac(int n){
    if (n==0 || n==1) return 1;
    return n*fac(n-1);
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Factorial: "<<fac(n)<<endl;
    return 0;
}