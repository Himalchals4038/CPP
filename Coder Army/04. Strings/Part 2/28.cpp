#include <bits/stdc++.h>
using namespace std;
string intToRoman(int num){
    if (num == 0) return "";
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string ans = "";
    for (int i=0; i<values.size() && num>0; i++) {
        while (num >= values[i]){
            ans += symbols[i];
            num -= values[i];
        }
    }
    return ans;
}
int main(){
    cout << "1994 is " << intToRoman(1994) << endl; // MCMXCIV
    cout << "58 is " << intToRoman(58) << endl;   // LVIII
    cout << "3 is " << intToRoman(3) << endl;     // III
    return 0;
}