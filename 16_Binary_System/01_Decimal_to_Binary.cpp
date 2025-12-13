#include<iostream>
using namespace std;
int decToBin(int a){
    int b=0;
    while(a>0){
        b*=10;
        b+=(a%2);
        a/=2;
    }
    return b;
};
int main()
{
    int a;
    cout<<"Enter decimal no: ";
    cin>>a;
    cout<<"Binary form of no: "<<decToBin(a);
    return 0;
}