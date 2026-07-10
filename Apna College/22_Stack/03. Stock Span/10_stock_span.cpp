#include <bits/stdc++.h>
using namespace std;
vector<int> stockSpan(vector<int> &prices){
    vector<int> ans(prices.size(),0);
    stack<int> span;
    for (int i=0;i<prices.size();i++){
        while (!span.empty() && prices[i]>=prices[span.top()]) span.pop();
        if (span.empty()) ans[i] = i+1;
        else ans[i] = i-span.top();
        span.push(i);
    }
    return ans;
}
int main(){
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = stockSpan(price);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}