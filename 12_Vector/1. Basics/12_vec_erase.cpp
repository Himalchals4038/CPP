#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {5,4,2,3,6,8,1,9};
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    
    vec.erase(vec.begin()); //Removes first element from vector
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    vec.erase(vec.begin()+2); //Removes third element from existing vector
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    vec.erase(vec.begin(), vec.begin()+2); //Erase function can be defined to remove a range of elements from the vector
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}