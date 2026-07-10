#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> list1 = {1,2,5,4,8,6,3,9,7};
    list1.emplace_front(11); //Adds element to the beginning of the list
    copy(list1.begin(), list1.end(), ostream_iterator<int>(cout, " "));
    return 0;
}