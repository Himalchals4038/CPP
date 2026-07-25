#include <bits/stdc++.h>
using namespace std;
int stringMatch(string s1, string s2){
    int n1 = s1.length(), n2 = s2.length();
    for(int i=0; i<n1; i++){
        if(s1[i] == s2[0]){
            int j=0, k=i;
            while(j<n2 && k<n1 && s1[k] == s2[j]){
                j++, k++;
            }
            if(j == n2) return i;
        }
    }
    return -1;
}
int main(){
    string s1 = "Hello World";
    string s2 = "World";
    cout<<stringMatch(s1, s2)<<endl;
    return 0;
}