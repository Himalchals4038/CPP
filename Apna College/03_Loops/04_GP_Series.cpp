#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, p=3;
    cout<<"Enter no. of terms in the series: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<p<<" ";
        p = p*4;
    }
    return 0;
}