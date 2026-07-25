#include <bits/stdc++.h>
using namespace std;
int findSubString(string s){
    int n = s.length();
    if (n == 0) return 0;

    // 1. Find the count of distinct characters required in the window
    unordered_set<char> distinct_chars;
    for (char c : s) distinct_chars.insert(c);
    int required_distinct_count = distinct_chars.size();

    // 2. Use a sliding window to find the smallest substring
    int start = 0, min_len = n, found_distinct = 0;
    vector<int> window_freq(256, 0);

    for (int end = 0; end < n; end++){
        // Expand the window by adding the character at `end`
        window_freq[s[end]]++;
        // If it's a new distinct character for the window, increment found_distinct
        if (window_freq[s[end]] == 1) found_distinct++;

        // Shrink the window from the start if all distinct characters are found
        while (found_distinct == required_distinct_count){
            min_len = min(min_len, end - start + 1);

            // Remove the character at `start` from the window
            window_freq[s[start]]--;
            if (window_freq[s[start]] == 0) found_distinct--;
            start++;
        }
    }
    return min_len;
}
int main(){
    cout<<"Smallest window size for 'aabcbcdbca': "<<findSubString("aabcbcdbca")<<endl;
    cout<<"Smallest window size for 'AABBBCBBA': "<<findSubString("AABBBCBBA")<<endl;
    cout<<"Smallest window size for 'zyzyzyz': "<<findSubString("zyzyzyz")<<endl;
    return 0;
}