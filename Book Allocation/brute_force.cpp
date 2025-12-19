#include <bits/stdc++.h>
using namespace std;
int alloc(vector<int>& vec, int n, int m){
    int min = 0, max = accumulate(vec.begin(), vec.end(), 0), ans = -1;
    while (min <= max){
        int mid = min + (max-min)/2;
        if (isValid(vec, mid)){
            ans = mid;
            max = mid-1;
        }
        else min = mid+1;
    }
}
bool isValid(vector<int> &vec ,int mid){

}
int main(){
    vector<int> vec = {2,1,3,4};
    int m;
    cout<<"No. of students: ";
    cin>>m;
    cout<<"Min pages: "<<alloc(vec,vec.size()-1,m)<<endl;
    return 0;
}