#include<iostream>
using namespace std;
float power(float x,int n){
    if (n==0)
        return 1.0;
    if (n<0)
        return 1.0/power(x,-n);
    if (n%2==0)
        return power(x,n/2)*power(x,n/2);
    else
        return x*power(x,n/2)*power(x,n/2);
}
int main(){
    float a;
    cout<<"Enter number: ";
    cin>>a;
    int b;
    cout<<"Enter Power: ";
    cin>>b;
    cout<<"Result: "<<power(a,b)<<endl;
    return 0;
}