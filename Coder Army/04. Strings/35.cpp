#include <bits/stdc++.h>
using namespace std;
string smallestDistinctWindow(string s){
    int n = s.length();
    if (n == 0) return "";

    unordered_set<char> distinct_chars;
    for (char c : s) distinct_chars.insert(c);
    int required_distinct_count = distinct_chars.size();

    int start = 0, start_index = -1, min_len = INT_MAX, found_distinct = 0;
    vector<int> window_freq(256, 0);

    for (int end = 0; end < n; end++){
        window_freq[s[end]]++;
        if (distinct_chars.count(s[end]) && window_freq[s[end]] == 1) found_distinct++;
        while (found_distinct == required_distinct_count){
            if (end-start+1 < min_len){
                min_len = end-start+1;
                start_index = start;
            }
            window_freq[s[start]]--;
            if (distinct_chars.count(s[start]) && window_freq[s[start]] == 0) found_distinct--;
            start++;
        }
    }
    return (start_index == -1) ? "" : s.substr(start_index, min_len);
}
int main(){
    cout<<"Smallest window for 'aabcbcdbca': "<<smallestDistinctWindow("aabcbcdbca")<<endl; // bcd
    cout<<"Smallest window for 'AABBBCBBA': "<<smallestDistinctWindow("AABBBCBBA")<<endl; // ABBBC
    cout<<"Smallest window for 'zyzyzyz': "<<smallestDistinctWindow("zyzyzyz")<<endl; // zy
    return 0;
}