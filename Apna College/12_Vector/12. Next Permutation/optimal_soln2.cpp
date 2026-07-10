#include <bits/stdc++.h>
using namespace std;
void nextPerm(vector<int> &vec){
    int i = vec.size()-1;
    while (i>0 && vec[i-1] >= vec[i]) i--;
    if (i<=0) reverse(vec.begin(), vec.end());
    else{
        int j = vec.size()-1;
        while (vec[i-1] >= vec[j]) j--;
        swap(vec[i-1], vec[j]);
        reverse(vec.begin()+i, vec.end());
    }
}
int main(){
    vector<int> vec1 = {1,2,3};
    vector<int> original = vec1;
    do{
        copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
        cout<<endl;
        nextPerm(vec1);
    }while (vec1 != original);
    return 0;
}