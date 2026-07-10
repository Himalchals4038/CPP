#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 69;
    vector<int> vec = {48, 15, 26, 37, 19, 76, 43, 18};
    sort(vec.begin(),vec.end());
    int i = 0;
    int j = vec.size()-1;
    while (true){
        int a = vec[i]+vec[j];
        if (a==t) break;
        if (a>t) j--;
        if (a<t) i++;
    }
    for (int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl<<vec[i]<<" "<<vec[j]<<endl;
    return 0;
}