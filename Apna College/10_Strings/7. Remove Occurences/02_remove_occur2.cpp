#include <bits/stdc++.h>
using namespace std;
//Remove duplicate item occurrence
string removeOccur(string str) {
    bool present[256]={false};
    for (unsigned char c:str) present[c]=true;
    string res = "";
    for (int i=0; i<256; i++) if (present[i]) res+=(char)i;
    return res;
}

int main(){
    string str1 = "daabaacbbcaadaaz";
    cout<<removeOccur(str1)<<endl;
    return 0;
}