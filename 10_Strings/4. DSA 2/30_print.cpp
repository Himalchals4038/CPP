#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "Random Things";
    for (int i=0;i<str.length();i++){
        cout<<"'"<<str[i]<<"'";
        if (i!=str.length()-1) cout<<",";
    }
    cout<<endl;
    return 0;
}