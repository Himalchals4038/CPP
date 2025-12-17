#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {2,3,3,2,3,2,2,3,2,1,1,3,1};
    set<int> uni(vec.begin(),vec.end());
    for (int i:uni){
        int freq = 0,a=0;
        for (int j:vec) (j==i) ? freq++,a++ : freq--;
        if (freq>0){
            cout<<"Number: "<<i<<endl;
            cout<<"Frequency: "<<a<<endl;
            return 0;
        }
    }
    return -1;
}