#include <bits/stdc++.h>
using namespace std;
bool canEat(vector<int> &piles, int k, int h){
    long long time = 0;
    for (int i=0; i<piles.size(); i++) time += (piles[i]+k-1)/k;
    return time<=h;
}
int minEatingSpeed(vector<int> &piles, int h){
    int start = 1;
    int end = 0;
    for (int pile : piles) end = max(end, pile);
    int ans = end, mid;
    while (start<=end){
        mid = start + (end-start)/2;
        if (canEat(piles, mid, h)){
            ans = mid;
            end = mid-1;
        }
        else start = mid+1;
    }
    return ans;
}
int main(){
    vector<int> piles = {30, 11, 23, 4, 20};
    int h = 5;
    cout << "Minimum eating speed: "<<minEatingSpeed(piles, h)<<endl;
    return 0;
}