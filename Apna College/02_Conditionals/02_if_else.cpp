#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    if (n%2==0){
        cout<<"Even number"<<endl;
    } 
    else{
        cout<<"Odd number"<<endl;
        cout<<"End of the program";
    }
    return 0;
}