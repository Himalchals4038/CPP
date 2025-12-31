#include <bits/stdc++.h>
using namespace std;
bool strPerm(string st1, string st2){
    string st3 = st1;
    if(st1.length()>st2.length()) return false;
    do{
        if(st2.find(st3)!=string::npos) return true;
        next_permutation(st3.begin(),st3.end());
    } while (st3!=st1);
    return false;
}
int main(){
    string st1 = "ab", st2 = "eidabooo", st3 = "eidboaoo";
    cout<<"Is present(?): "<<(strPerm(st1,st2)?"Yes":"No")<<endl;
    cout<<"Is present(?): "<<(strPerm(st1,st3)?"Yes":"No")<<endl;
    return 0;
}