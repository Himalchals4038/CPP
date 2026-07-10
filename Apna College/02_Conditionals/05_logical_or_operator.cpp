#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // if (n%3==0 and n%5==0){
    if (n%3==0 && n%5==0){
        cout<<"Number is divisible by both 3 and 5";
    }
    // else if (n%3==0 or n%5==0){
    else if (n%3==0 || n%5==0){
        cout<<"Number is divisible by either 3 or 5";
    }
    else{
        cout<<"Number is neither divisible by 3 nor 5";
    }
    return 0;
}