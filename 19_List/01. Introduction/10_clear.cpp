#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> list1 = {5,4,2,3,6,8,1,9};
    list1.clear();
    copy(list1.begin(), list1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    cout<<"Size: "<<list1.size()<<endl;
    cout<<"Empty(?): "<<list1.empty()<<endl;
    return 0;
}