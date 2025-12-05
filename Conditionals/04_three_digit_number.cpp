#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // if (n>99 and n<1000){
    // if (n>99 && n<1000){
    // if (n>=100 and n<=999){
    if (n>=100 && n<=999){
        cout<<("It is a three digit number");
    }
    else{
        cout<<("It is not a three digit number");
    }
    return 0;
}