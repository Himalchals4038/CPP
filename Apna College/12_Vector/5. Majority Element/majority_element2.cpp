#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {2,1,3,1,3,2,2,3,1,1,1,3};
    set<int> uni(vec.begin(),vec.end());
    int maxi = INT_MIN;
    for (int i : uni){
        int count = 0;
        for (int j : vec){
            if (j==i) count++;
        }
        maxi = max(count,maxi);
        if (maxi>vec.size()/2) break;
    }
    cout<<"Max repetitions: "<<maxi<<endl;
    return 0;
}