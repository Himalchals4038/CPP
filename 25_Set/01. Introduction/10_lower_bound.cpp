#include <bits/stdc++.h>
using namespace std;
//Lower bound can be equal to or greater than the key
//Upper bound should be greater than the key

int main(){
    set<int> st1;
    st1.insert(1);
    st1.insert(2);
    st1.insert(3);
    st1.insert(5);
    st1.insert(6);
    st1.insert(7);
    st1.insert(9);
    st1.insert(11);
    copy(st1.begin(), st1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    //Denotes lowest possible number accessible in the set
    cout<<"Lower Bound: "<<*st1.lower_bound(4)<<endl;
    //Default set as st1.end(), dereferencing it will return 0
    
    //Denotes highest possible number accessible in the set
    cout<<"Upper Bound: "<<*st1.upper_bound(9)<<endl;
    //Default set as st1.rend(), dereferencing it will return 0

    return 0;
}