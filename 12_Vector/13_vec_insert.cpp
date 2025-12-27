#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {5,4,2,3,6,8,1,9};
    vec.insert(vec.begin()+3, 15); //Inserts 15 at the 4th position in the vector
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    cout<<"Size: "<<vec.size()<<endl;
    cout<<"Capacity: "<<vec.capacity()<<endl;
    return 0;
}