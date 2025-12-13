#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, a=1;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++) cout<<" ";
        for (int j=1;j<=2*i+1;j++){
            cout<<a%2;
            a++;
        }
        cout<<endl;
        a=1;
    }
    return 0;
}