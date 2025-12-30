#include <bits/stdc++.h>
using namespace std;
void nextPerm(string s){
    string org = s;
    do{
        copy(s.begin(), s.end(), ostream_iterator<char>(cout, " "));
        cout<<endl;
        next_permutation(s.begin(), s.end());
    }while (s != org);
}
int main(){
    string s1 = "star";
    nextPerm(s1);
    return 0;
}