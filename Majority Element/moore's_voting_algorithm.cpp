#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {2,1,3,1,3,1,2,3,1,1,1,3,1};
    set<int> uni(vec.begin(),vec.end());
    int freq = 0,a=0;
    for (int i:uni){
        for (int j:vec){
            if (j==i){
                a++;
                freq++;
            } 
            if (j!=i) freq--;
        }
        if (freq>0){
            cout<<"Number: "<<i<<endl;
            cout<<"Frequency: "<<a<<endl;
            return 0;
        }
        freq = 0;
        a=0;
    }
    return -1;
}