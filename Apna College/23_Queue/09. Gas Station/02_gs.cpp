#include <bits/stdc++.h>
using namespace std;
int canCompleteCircuit(vector<int> &gas, vector<int> &cost){
    int n = gas.size();
    for (int i=0; i<n; i++){
        int sum = 0;
        for (int j=0; j<n; j++){
            int idx = (i+j)%n;
            sum += gas[idx]-cost[idx];
            if (sum<0) break;
        }
        if (sum>=0) return i;
    }
    return -1;
}
int main(){
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
    cout<<canCompleteCircuit(gas, cost);
    return 0;
}