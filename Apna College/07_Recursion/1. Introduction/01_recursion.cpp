#include<iostream>
using namespace std;
void tillOne(int n){
    cout<<n<<endl;
    if (n!=1) tillOne(n-1);
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    tillOne(n);
    return 0;
}