#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {5, 4, 5, 8, 9, 7, 6};
    reverse(vec.begin()+1, vec.begin()+3);
    //Reverse elements from index 1 to 3
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    return 0;
}