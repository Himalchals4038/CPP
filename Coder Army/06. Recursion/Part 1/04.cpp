#include <bits/stdc++.h>
using namespace std;
int nthstair(int n){
    if (n <= 1) return 1;
    if (n == 2) return 2;
    return nthstair(n-1) + nthstair(n-2);
}
int nthstair_optimized(int n, vector<int>& memo){
    if (memo[n] != -1) return memo[n];
    if (n <= 1) return 1;
    if (n == 2) return 2;
    memo[n] = nthstair_optimized(n-1, memo) + nthstair_optimized(n-2, memo);
    return memo[n];
}
int main(){
    int n = 10;
    vector<int> memo(n + 1, -1); // Initialize memoization table with -1
    cout<<"Number of ways to climb "<<n<<" stairs (Optimized): "<<nthstair_optimized(n, memo)<<endl; // Expected: 89
    cout<<"Number of ways to climb "<<n<<" stairs (Original): "<<nthstair(n)<<endl; // Expected: 89
    return 0;
}