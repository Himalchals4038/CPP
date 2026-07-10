#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st1 = {15, 24, 75, 84, 96};
    copy(st1.begin(), st1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    set<int> st2;
    st2.swap(st1);

    cout<<"Is Empty(?): "<<(st1.empty() ? "True" : "False")<<endl;
    return 0;
}