#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter no. of rows: ";
    cin>>a;
    cout<<"Enter no. of columns: ";
    cin>>b;
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cout<<char(65+j);
        }
        cout<<endl;
    }
    return 0;
}