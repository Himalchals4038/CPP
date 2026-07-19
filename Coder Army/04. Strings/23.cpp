#include <bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2){
    int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
    string ans = "";
    while (i >= 0 || j >= 0 || carry != 0){
        int sum = carry + (i >= 0 ? num1[i--] - '0' : 0) + (j >= 0 ? num2[j--] - '0' : 0);
        ans += (sum % 10) + '0';
        carry = sum / 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    string num1 = "123", num2 = "456";
    string ans = addStrings(num1, num2);
    cout<<ans<<endl;
    return 0;
}