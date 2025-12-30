#include <bits/stdc++.h>
using namespace std;
void nextPerm(vector<int> &vec){
    vector<int> original = vec;
    do{
        copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
        next_permutation(vec.begin(), vec.end());
    }while (vec != original);
}
int main(){
    vector<int> vec1 = {1,2,3};
    nextPerm(vec1);
    return 0;
}