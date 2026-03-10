#include <bits/stdc++.h>
using namespace std;
int countInversions(vector<int> &vec){
    int count = 0;
    for (int i=0;i<vec.size()-1;i++){
        for (int j=i+1;j<vec.size();j++) if (vec[i]>vec[j]) count++;
    }
    return count;
}
int main(){
    vector<int> vec = {6,3,5,2,7};
    cout<<"No. of inversions: "<<countInversions(vec)<<endl;
    return 0;
}