#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {5,4,2,3,6,8,1,9};
    vec.clear();
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    cout<<"Size: "<<vec.size()<<endl;
    cout<<"Empty(?): "<<vec.empty()<<endl; //Return 1 if vector is empty, else 0
    cout<<"Capacity: "<<vec.capacity()<<endl;
    return 0;
}