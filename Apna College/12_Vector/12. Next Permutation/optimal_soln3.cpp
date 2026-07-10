#include <bits/stdc++.h>
using namespace std;
void nextPerm(vector<int> &vec){
    int piv = -1, len = vec.size();
    for (int i=len-2; i>=0; i--){
        if (vec[i]<vec[i+1]){
            piv = i;
            break;
        }
    }
    if (piv==-1){
        reverse(vec.begin(), vec.end());
        return;
    }
    for (int i=len-1; i>piv; i--){
        if (vec[i] > vec[piv]){
            swap(vec[i], vec[piv]);
            break;
        }
    }
    reverse(vec.begin()+piv+1, vec.end());
}
int main(){
    vector<int> vec1 = {1,2,3,5,4};
    vector<int> original = vec1;
    do{
        copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
        cout<<endl;
        nextPerm(vec1);
    }while (vec1 != original);
    return 0;
}