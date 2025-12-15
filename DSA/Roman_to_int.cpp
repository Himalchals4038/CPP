#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int total = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
            total -= romanMap[s[i]];
        } else {
            total += romanMap[s[i]];
        }
    }
    return total;
}

int main() {
    string roman1 = "III";
    string roman2 = "LVIII";
    string roman3 = "MCMXCIV";

    cout << roman1 << " = " << romanToInt(roman1) << endl;
    cout << roman2 << " = " << romanToInt(roman2) << endl;
    cout << roman3 << " = " << romanToInt(roman3) << endl;

    return 0;
}
