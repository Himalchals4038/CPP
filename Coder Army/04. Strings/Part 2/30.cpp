#include <bits/stdc++.h>
using namespace std;
string factorial(int n){
    if (n<0) return "Factorial is not defined for negative numbers";
    vector<int> ans(1, 1);
    for (int i=2; i<=n; i++){
        int carry = 0;
        for (int j=0; j<ans.size(); j++){
            int product = ans[j] * i + carry;
            ans[j] = product%10;
            carry = product/10;
        }
        while (carry>0){
            ans.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(ans.begin(), ans.end());
    string res = "";
    for (int i=0; i<ans.size(); i++) res += to_string(ans[i]);
    return res;
}
int main(){
    int n = 20;
    cout<<"Factorial of "<<n<<" (large number): "<<factorial(n)<<endl;
    return 0;
}