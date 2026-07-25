#include <bits/stdc++.h>
using namespace std;
string sortString(string s){
    sort(s.begin(),s.end());
    return s;
}
int main(){
    string s = "geeksforgeeks";
    cout<<sortString(s)<<endl;
    return 0;
}