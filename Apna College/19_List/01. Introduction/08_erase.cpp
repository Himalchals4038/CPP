#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> list1 = {5,4,2,3,6,8,1,9};
    copy(list1.begin(), list1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    
    list1.erase(list1.begin()); //Removes first element
    copy(list1.begin(), list1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    list1.erase(next(list1.begin(), 2)); //Removes third element
    copy(list1.begin(), list1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    list1.erase(list1.begin(), next(list1.begin(), 2));
    copy(list1.begin(), list1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}