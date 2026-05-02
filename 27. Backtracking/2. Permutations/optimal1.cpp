#include <bits/stdc++.h>
using namespace std;
void printPermutations(vector<int> &vec, int ind){
    if (ind==vec.size()){
        for (int x : vec) cout<<x<<" ";
        cout<<endl;
        return;
    }
    for (int i=ind; i<vec.size(); i++){
        swap(vec[i], vec[ind]);
        printPermutations(vec, ind+1);
        swap(vec[i], vec[ind]);
    }
}
int main(){
    vector<int> vec = {1,2,3};
    printPermutations(vec, 0);
    return 0;
}