#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st1 = {15, 24, 75, 84, 96, 35, 62};

    copy(st1.begin(), st1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    auto it = st1.find(24);
    if (it != st1.end()) cout<<"Index: "<<distance(st1.begin(),it)<<endl;
    else cout<<"False"<<endl;
    return 0;
}