#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s){
    int sum = 0;
    unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    for (int i=0; i<s.size(); i++){
        if (i+1 < s.size() && roman[s[i]] < roman[s[i+1]]) sum -= roman[s[i]];
        else sum += roman[s[i]];
    }
    return sum;
}
int main(){
    string s = "MCMXCIV";
    cout<<romanToInt(s)<<endl;// Output: 1994
    s = "III";
    cout<<romanToInt(s)<<endl;// Output: 3
    s = "LVIII";
    cout<<romanToInt(s)<<endl;// Output: 58
    s = "IX";
    cout<<romanToInt(s)<<endl;// Output: 9
    return 0;
}