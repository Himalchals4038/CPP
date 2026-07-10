#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a;
    cout<<"Enter no. of rows: ";
    cin>>a;
    for (int i=0;i<a;i++){
        for (int j=0;j<a-1-i;j++) cout<<" ";
        for (int j=0;j<2*i+1;j++){
            cout<<char(65+j);
        }
        cout<<endl;
    }
    return 0;
}