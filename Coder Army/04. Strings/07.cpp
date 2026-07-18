#include <bits/stdc++.h>
using namespace std;
string rotateClock(string s, int k) {
    if (s.length() <= 1) return s;
    int n = s.length();
    k = k % n;
    if (k == 0) return s;
    std::rotate(s.begin(), s.begin() + n - k, s.end());
    return s;
}
string rotateAntiClock(string s, int k) {
    if (s.length() <= 1) return s;
    int n = s.length();
    k = k % n;
    if (k == 0) return s;
    std::rotate(s.begin(), s.begin() + k, s.end());
    return s;
}
bool checkStringRotated(string s1, string s2, int k){
    if (s1.length() != s2.length()) return false;
    return (rotateClock(s1, k) == s2 || rotateAntiClock(s1, k) == s2);
}
int main(){
    string s1 = "Amazon";
    cout << "Clockwise by 2: " << rotateClock(s1, 2) << endl;
    cout << "Anti-Clockwise by 2: " << rotateAntiClock(s1, 2) << endl;
    cout << "Is 'azonAm' a rotation of 'Amazon' by 2? " << boolalpha << checkStringRotated(s1, "azonAm", 2) << endl;
    return 0;
}