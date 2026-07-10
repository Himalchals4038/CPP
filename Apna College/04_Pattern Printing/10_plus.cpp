#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    while (true){
        cout<<"Enter no. of rows (odd number): ";
        cin>>n;
        if (n%2==0){
            cout<<"Invalid Number, please try again"<<endl;
            continue;
        } 
        else{
            for (int i=0;i<n;i++){
                if (i==n/2){
                    for (int j=0;j<n;j++) cout<<"*";
                }
                else{
                    for (int k=0;k<n/2;k++) cout<<" ";
                    cout<<"*";
                }
                cout<<endl;
            }
            break;
        }
    }

    return 0;
}