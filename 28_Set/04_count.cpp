#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st1 = {15, 24, 75, 84, 96, 35, 62};
    //Checks if element is present (1) or not (0)
    cout<<"Count of 15: "<<st1.count(15)<<endl;
    cout<<"Count of 16: "<<st1.count(16)<<endl;
    copy(st1.begin(), st1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}