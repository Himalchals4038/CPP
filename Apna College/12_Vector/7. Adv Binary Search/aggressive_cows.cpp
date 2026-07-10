#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> vec, int n, int m, int max){
    int cow = 1, lastStallPos = vec[0];
    for(int i=1; i<n; i++){
        if(vec[i] - lastStallPos >= max){
            cow++;
            lastStallPos = vec[i];
        }
        if (cow==m) return true;
    }
    return false;
}
int alloc(vector<int> vec, int n, int m){
    sort(vec.begin(),vec.end());
    int st = 1, end = vec[n-1]-vec[0], ans = -1;
    while(st<=end){
        int mid = end + (st-end)/2;
        (isPossible(vec,n,m,mid)) ? ans = mid, st = mid+1 : end = mid-1;
    }
    return ans;
}
int main(){
    vector<int> vec = {1,2,8,4,9};
    int m;
    cout<<"No. of cows: ";
    cin>>m;
    cout<<"Largest min dist: "<<alloc(vec,vec.size(),m)<<endl;
    return 0;
}