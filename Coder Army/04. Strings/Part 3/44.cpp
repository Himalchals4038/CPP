#include <bits/stdc++.h>
using namespace std;
int stringMatch(string s1, string s2){
    int n1 = s1.length(), n2 = s2.length();
    for (int i=0; i<=n1-n2; i++){
        int first = i, second = 0;
        while (second < n2){
            if (s1[first] != s2[second]) break;
            else first++, second++;
        }
        if (second == n2) return first-second;
    }
    return -1;
}
int main(){
    string s1 = "Hello World";
    string s2 = "World";
    cout<<stringMatch(s1, s2)<<endl;
    return 0;
}