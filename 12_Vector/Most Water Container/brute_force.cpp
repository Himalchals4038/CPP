#include <bits/stdc++.h>
using namespace std;
int mostWater(vector<int> vec){
    int vol=0;
    for (int i=0;i<vec.size();i++){
        for (int j=i+1;j<vec.size();j++){
            vol=max(vol,min(vec[i],vec[j])*(j-i));
        }
    }
    return vol;
}
int main(){
    vector<int> vec={1,8,6,2,5,4,8,3,7};
    cout<<"Max Water Vol: "<<mostWater(vec)<<endl;
    return 0;
}