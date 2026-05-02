#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st1 = {15, 24, 75, 84, 96, 35, 62};
    cout<<"Set Size: "<<st1.size()<<endl;
    copy(st1.begin(), st1.end(), ostream_iterator<int>(cout, " "));
    
    //Displays the max no. of elements that can be accommodated inside the set
    cout<<"Max Size: "<<st1.max_size()<<endl;
    return 0;
}