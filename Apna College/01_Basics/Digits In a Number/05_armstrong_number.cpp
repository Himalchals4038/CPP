#include <bits/stdc++.h>
using namespace std;
bool armstrong(int n){
    int sum = 0, temp = n;
    while(n!=0){
        sum+=pow((n%10),3);
        n/=10;
    }
    return temp == sum;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Is Armstrong: "<<(armstrong(n) ? "Yes" : "No");
    return 0;
}