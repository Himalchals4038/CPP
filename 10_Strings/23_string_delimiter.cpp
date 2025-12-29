#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cout<<"Enter Input: ";
    cin.getline(str, 10, '$');
    //Input taking is stopped after delimiter symbol ($ in this case)
    cout<<str<<endl;
    return 0;
}