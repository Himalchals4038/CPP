#include <bits/stdc++.h>
using namespace std;
vector<int> findErrorNums(vector<vector<int>> &vec){
    vector<int> ans;
    unordered_set<int> s;
    int a,b, actualSum = 0, expSum = (vec.size()*vec.size())*(vec.size()*vec.size()+1)/2;
    for(int i=0; i<vec.size(); i++){
        for (int j=0; j<vec.size(); j++){
            actualSum += vec[i][j];
            if (s.find(vec[i][j]) != s.end()){
                a = vec[i][j];
                ans.push_back(a);
            }
            s.insert(vec[i][j]);
        }
    }
    b = expSum + a - actualSum;
    ans.push_back(b);
    return ans;
}
int main(){
    vector<vector<int>> vec = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> ans = findErrorNums(vec);
    copy(ans.begin(),ans.end(),ostream_iterator<int>(cout," "));
    return 0;
}