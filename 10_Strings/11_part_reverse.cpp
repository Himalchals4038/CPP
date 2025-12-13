#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string name = "Procastination";
    cout<<name<<endl;
    // reverse(name.begin(),name.begin()+name.length()/2);
    // reverse(name.begin(),name.begin()+4);
    reverse(name.begin()+1,name.end()-4);
    cout<<name<<endl;
    return 0;
}