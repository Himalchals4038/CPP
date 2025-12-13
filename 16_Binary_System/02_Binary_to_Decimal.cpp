#include<iostream>
#include<cmath>
using namespace std;
int binToDec(int a){
    int b=0,i=0;
    while(a>0){
        b+=(a%10)*(pow(2,i));
        a/=10;
        i++;
    }
    return b;
}
int main(){
    int a;
    cout<<"Enter binary no: ";
    cin>>a;
    cout<<"Decimal form of no: "<<binToDec(a);
    return 0;
}
