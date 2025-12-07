#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    while (true){
        cout<<"Enter no. of rows (Odd number): ";
        cin>>n;
        if (n%2==0){
            cout<<"Invalid number, try again!"<<endl;
            continue;
        }
        else{
            for (int i=0;i<n;i++){
                if (i<n/2){
                    for (int j=0; j<i;j++) cout<<" ";
                    cout<<"*";
                    for (int j=0;j<(n-2*(i+1));j++) cout<<" ";
                    cout<<"*";
                }
                else if(i==n/2){
                    for (int j=0;j<n-i-1;j++) cout<<" ";
                    cout<<"*";
                }
                else{
                    for (int j=0;j<n-i-1;j++) cout<<" ";
                    cout<<"*";
                    for (int j=0;j<(2*(i-n/2)-1);j++) cout<<" ";
                    cout<<"*";
                }
                cout<<endl;
            }
        }
        break;
    }
    return 0;
}