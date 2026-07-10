#include <bits/stdc++.h>
using namespace std;
vector<int> digitVec(int n){
    vector<int> vec;
    while(n>0){
        vec.insert(vec.begin(), n%10);
        n/=10;
    }
    return vec;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    vector<int> ans = digitVec(n);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}