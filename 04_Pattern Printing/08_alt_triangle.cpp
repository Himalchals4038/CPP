#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=0;j<n-i;j++) cout<<" ";
        if (i%2==0){
            for (int j=0;j<2*i-1;j++) cout<<char(97+j);
        }
        else{
            for (int j=1;j<=2*i-1;j++) cout<<j;
        }
        cout<<endl;
    }
    return 0;
}