#include <bits/stdc++.h>
using namespace std;
//Doubly Linked List
int main(){
    list<int> list1 = {1,2,5,4,8,6,3,9,7};
    copy(list1.begin(), list1.end(), ostream_iterator<int>(cout, " "));
    
    // cout<<list1[3]<<endl; Random elements can't be accessed directly in linked lists
    //They need to accessed using begin and end operators
    cout<<endl<<*(list1.begin())<<endl; 

    //+ operator can't be used directly with list
    // cout<<*(next(list1.begin()+3))<<endl;

    //Instead next operator is used
    cout<<*(next(list1.begin(),3))<<endl;
    return 0;
}