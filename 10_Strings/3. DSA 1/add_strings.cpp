#include <bits/stdc++.h>
using namespace std;

string addStrings(const string& a, const string& b) {
    int i = (int)a.size() - 1;
    int j = (int)b.size() - 1;
    int carry = 0;
    string res; res.reserve(max(a.size(), b.size()) + 1);
    while (i >= 0 || j >= 0 || carry) {
        carry += (i >= 0) ? a[i--] - '0' : 0;
        carry += (j >= 0) ? b[j--] - '0' : 0;
        res.push_back(char('0' + (carry % 10)));
        carry /= 10;
    }
    reverse(res.begin(), res.end());
    size_t pos = res.find_first_not_of('0');
    if (pos == string::npos) return "0";
    return res.substr(pos);
}

int main() {
    vector<pair<string,string>> tests = {
        {"123","456"},               // 579
        {"999","1"},                 // 1000
        {"0","0"},                   // 0
        {"12345678901234567890","9"},// 12345678901234567899
        {string(100,'9'), "1"}        // carry through long number
    };
    for (auto &p : tests) {
        cout << p.first << " + " << p.second << " = " << addStrings(p.first,p.second) << '\n';
    }
    return 0;
}
