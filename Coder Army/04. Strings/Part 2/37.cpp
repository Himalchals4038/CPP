#include <bits/stdc++.h>
using namespace std;
int findSubString(string s){
    vector<int> count(256, 0);
    int first = 0, second = 0, len = s.size(), diff = 0;
    while (first<len){
        if (count[s[first]] == 0) diff++;
        count[s[first]]++;
        first++;
    }
    for (int i=0; i<256; i++) count[i] = 0;
    first = 0;
    while (second<len){
        while (diff && second<len){
            if (count[s[second]] == 0) diff--;
            count[s[second]]++;
            second++;
        }
        len = min(len, second-first);
        while (diff!=1){
            len = min(len, second-first);
            count[s[first]]--;
            if (count[s[first]] == 0) diff++;
            first++;
        }
    }
    return len;
}
int main(){
    cout<<"Smallest window size for 'aabcbcdbca': "<<findSubString("aabcbcdbca")<<endl;
    cout<<"Smallest window size for 'AABBBCBBA': "<<findSubString("AABBBCBBA")<<endl;
    cout<<"Smallest window size for 'zyzyzyz': "<<findSubString("zyzyzyz")<<endl;
    return 0;
}