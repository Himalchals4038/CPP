#include <bits/stdc++.h>
using namespace std;
vector<int> stock2(vector<int> vec){
    vector<int> ans(2,0);
    int dif = 0;
    for (int i=0;i<vec.size()-1;i++){
        for (int j=i+1;j<vec.size();j++){
            if ((vec[j]-vec[i])>dif){
                ans[0] = vec[i];
                ans[1] = vec[j];
                dif = vec[j]-vec[i];
            }
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