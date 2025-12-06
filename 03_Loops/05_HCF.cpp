#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    // int a = 1;
    cout<<"Enter number: ";
    cin>>n;
    // for (int i=1; i<n/2; i++){
    //     if (n%i==0) a=i;
    // }
    for (int i=n/2; i>=1; i--){
        if (n%i==0){
            cout<<"HCF of the number is: "<<i;
            break;
    }
}
    return 0;
}