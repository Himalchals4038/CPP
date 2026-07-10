#include<iostream>
using namespace std;
float factorial(int a){
    if (a==0 || a==1) return 1;
    int b = 1;
    for (int i=1;i<=a;i++){
        b=b*i;
    }
    return b;
}
int comb(int n, int r){
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}
int main()
{
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=1;j<n-i;j++) cout<<" ";
        for (int j=0;j<i+1;j++) cout<<comb(i,j)<<" ";
        cout<<endl;
    }
    return 0;
}