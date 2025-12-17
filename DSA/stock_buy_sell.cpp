#include <bits/stdc++.h>
using namespace std;
int stock1(vector<int> vec){
    int max_profit = INT_MIN;
    for (int i=0;i<vec.size()-1;i++){
        max_profit = max(max_profit,vec[i+1]-vec[i]);
    }
    return max_profit;
}
vector<int> stock2(vector<int> vec){
    vector<int> ans;
    for (int i=0;i<vec.size()-1;i++){
        int dif = 0;
        
    }
}
int main(){
    vector<int> price = {7,1,5,3,6,4};
    cout<<"Max Profit: "<<stock1(price);
    return 0;
}