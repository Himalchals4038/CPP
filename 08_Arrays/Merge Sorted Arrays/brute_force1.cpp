#include <bits/stdc++.h>
using namespace std;
vector<int> ins(vector<int>& vec1, vector<int>& vec2){
    vec1.insert(vec1.end(), vec2.begin(), vec2.end());
    sort(vec1.begin(), vec1.end());
    
    auto new_end = remove(vec1.begin(), vec1.end(), 0); //Reqd to remove 0s from the initial vector
    vec1.erase(new_end, vec1.end());
    return vec1;
}
int main(){
    vector<int> vec1 = {1,2,3,0,0,0};
    vector<int> vec2 = {2,5,6};
    ins(vec1, vec2);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}