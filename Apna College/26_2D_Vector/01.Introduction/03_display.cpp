#include <bits/stdc++.h>
using namespace std;
void displayVec(vector<vector<int>> vec){
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec[i].size(); j++) cout<<vec[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> vec = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    displayVec(vec);
    return 0;
}