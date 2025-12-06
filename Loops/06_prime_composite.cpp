#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    bool flag = false;
    cout<<"Enter the number: ";
    cin>>n;
    if (n==0 or n==1) cout<<"Neither prime nor composite";
    else if (n==2) cout<<"Prime Number";
    else{
        for (int i=2; i<=n/2; i++){
            if (n%i==0){
                flag = true;
                cout<<"Composite Number";
                break;
            }
        }
        if (flag==false){
            cout<<"Prime Number";
        }
    }
    return 0;
}