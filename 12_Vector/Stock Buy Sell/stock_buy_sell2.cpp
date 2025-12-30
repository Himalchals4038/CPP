#include <bits/stdc++.h>
using namespace std;
vector<int> stock2(vector<int> vec){
    if (vec.size() < 2) return {0, 0};
    vector<int> ans(2,0);
    int min_price = vec[0];
    int buy_price = vec[0];
    int max_profit = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] < min_price) min_price = vec[i];
        if (vec[i] - min_price > max_profit){
            max_profit = vec[i] - min_price;
            ans[0] = min_price;
            ans[1] = vec[i];
        }
    }
    return ans;
}
int main(){
    vector<int> price = {7,1,5,3,6,4,15,7,23,17,18,20};
    vector<int> result = stock2(price);
    cout<<"Buy Price: "<<result[0]<<endl;
    cout<<"Sell Price: "<<result[1]<<endl;
    cout<<"Total Profit: "<<result[1]-result[0]<<endl;
    return 0;
}