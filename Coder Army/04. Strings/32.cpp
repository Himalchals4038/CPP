#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
bool hasUniqueCharacters(const std::string& s){
    std::unordered_set<char> charSet;
    for (char c : s){
        if (charSet.count(c)) return false;
        charSet.insert(c);
    }
    return true;
}
std::string longestSubstringBruteForce(const std::string& s){
    if (s.empty()) return "";
    int n = s.length(), maxLen = 0;
    std::string longestSub = "";
    for (int i=0; i<n; ++i){
        for (int j=i; j<n; ++j){
            std::string sub = s.substr(i,j-i+1);
            if (hasUniqueCharacters(sub)){
                if (sub.length() > maxLen){
                    maxLen = sub.length();
                    longestSub = sub;
                }
            }
        }
    }
    return longestSub;
}
int main(){
    std::cout<<"Longest substring of 'abcabcbb' is: "<<longestSubstringBruteForce("abcabcbb")<<std::endl; // "abc"
    std::cout<<"Longest substring of 'bbbbb' is: "<<longestSubstringBruteForce("bbbbb")<<std::endl;    // "b"
    std::cout<<"Longest substring of 'pwwkew' is: "<<longestSubstringBruteForce("pwwkew")<<std::endl;  // "wke"
    return 0;
}
