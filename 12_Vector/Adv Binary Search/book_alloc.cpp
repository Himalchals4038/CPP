#include <bits/stdc++.h>
using namespace std;
bool isValid(vector<int> &vec, int n, int m, int max){
    int st = 1, pages = 0;
    for(int i=0; i<n; i++){
        if(vec[i]>max) return false;
        if(pages + vec[i] <= max) pages+=vec[i];
        else{
            st++;
            pages = vec[i];
        }
    }
    return (st > m) ? false: true;
}
int alloc(vector<int>& vec, int n, int m){
    if(m > n) return -1;
    int st = 0, end = accumulate(vec.begin(), vec.end(), 0), ans = -1;
    while (st <= end){
        int mid = st + (end-st)/2;
        (isValid(vec,n,m,mid)) ? ans = mid, end = mid-1 : st = mid+1;
    }
    return ans;
}
int main(){
    vector<int> vec = {2,1,3,4};
    int m;
    cout<<"No. of students: ";
    cin>>m;
    cout<<"Min pages: "<<alloc(vec,vec.size(),m)<<endl;
    return 0;
}