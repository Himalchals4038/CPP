#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of table to be printed: ";
    cin>>n;
    for (int i=1;i<=20;i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}