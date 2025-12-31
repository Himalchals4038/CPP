#include <bits/stdc++.h>
using namespace std;
int peak(vector<int> &vec, int a){
    if (vec.size()<3) return -1;
    if (vec[a] > vec[a-1]){
        if (vec[a] > vec[a+1]) return vec[a];
        return peak(vec,a+1);
    }
    else{
        if (vec[a] > vec[a-1]) return vec[a];
        return peak(vec,a-1);
    }
}
int main(){
    vector<int> arr = {1,3,5,7,6,4,2,0};
    int start;
    cout<<"Enter index to start from: ";
    cin>>start;
    cout<<"Peak: "<<peak(arr,start)<<endl;
    return 0;
}