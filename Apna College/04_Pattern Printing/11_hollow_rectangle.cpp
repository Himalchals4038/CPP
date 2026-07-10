#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b;
    while (true){
        cout<<"Enter no. of rows(more than 2): ";
        cin>>a;
        if (a<3){
            cout<<"Invalid number!";
            continue;
        }
        else{
            cout<<"Enter no. of columns: ";
            cin>>b;
            for (int i=0;i<a;i++){
                if (i==0 || i==a-1){
                    for (int j=0;j<b;j++) cout<<"*";
                    cout<<endl;
                }
                else{
                    for (int j=0;j<b;j++){
                        if (j==0 || j==b-1) cout<<"*";
                        else cout<<" ";
                    }
                    cout<<endl;
                }
            }
        }
        break;
    }
    return 0;
}