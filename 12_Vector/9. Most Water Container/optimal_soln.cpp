#include <bits/stdc++.h>
using namespace std;
int mostWater(vector<int> vec){
    int vol=0;
    int lp = 0;
    int rp = vec.size()-1;
    while(lp<rp){
        vol = max(vol,(rp-lp)*min(vec[lp],vec[rp]));
        vec[lp]<vec[rp] ? lp++ : rp--;
    }
    return vol;
}
int main(){
    vector<int> vec={1,8,6,2,5,4,8,3,7};
    cout<<"Max Water Vol: "<<mostWater(vec)<<endl;
    return 0;
}