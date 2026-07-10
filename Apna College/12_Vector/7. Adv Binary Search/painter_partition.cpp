#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> vec, int n, int m, int max){
    int painter = 1, time = 0;
    for(int i=0; i<n; i++){
        if(vec[i]>max) return false;
        if(time + vec[i] <= max) time+=vec[i];
        else{
            painter++;
            time = vec[i];
        }
    }
    return (painter > m) ? false: true;
}
int alloc(vector<int> vec, int n, int m){
    if(m > n) return -1;
    int st = *max_element(vec.begin(), vec.end()), end = accumulate(vec.begin(), vec.end(), 0), ans = -1;
    while (st <= end){
        int mid = st + (end-st)/2;
        (isPossible(vec,n,m,mid)) ? ans = mid, end = mid-1 : st = mid+1;
    }
    return ans;
}
int main(){
    vector<int> vec = {20, 10, 23, 40};
    int m;
    cout<<"No. of painters: ";
    cin>>m;
    cout<<"Min time taken: "<<alloc(vec,vec.size(),m)<<endl;
    return 0;
}