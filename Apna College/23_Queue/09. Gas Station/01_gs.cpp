#include <bits/stdc++.h>
using namespace std;
int canCompleteCircuit(vector<int> &gas, vector<int> &cost){
    int n = gas.size();
    
    int total_gas = 0;
    int current_gas = 0;
    int start_index = 0;
    
    for (int i=0; i<n; i++){
        int diff = gas[i]-cost[i];
        total_gas+=diff;
        current_gas+=diff;
        
        if (current_gas<0){
            start_index = i+1;
            current_gas = 0;
        }
    }
    return total_gas >= 0 ? start_index : -1;
}
int main(){
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
    cout<<canCompleteCircuit(gas, cost);
    return 0;
}