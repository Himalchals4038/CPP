#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, j=0, k;
    cout<<"Enter number: ";
    cin>>n;
    while(n>0){
        k = n%10;
        j=j*10+k;
        n=n/10;
    }
    cout<<"Swapped Number: "<<j;
    return 0;
}