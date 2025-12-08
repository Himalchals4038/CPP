#include<iostream>
using namespace std;
int pow(int a, int b){
    if (b==0) return 1;
    return a*pow(a,b-1);
}
int main()
{
    int a;
    cout<<"Enter number: ";
    cin>>a;
    int b;
    cout<<"Enter Power: ";
    cin>>b;
    cout<<"Answer: "<<pow(a,b)<<endl;
    return 0;
}