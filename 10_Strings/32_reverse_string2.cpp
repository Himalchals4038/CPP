#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "Administer";
    for(int i=0;i<str.length()/2;i++) swap(str[i],str[str.length()-1-i]);
    for(char i:str) cout<<i;
    cout<<endl;
    return 0;
}