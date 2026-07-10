#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> list1 = {5,4,2,3,6,8,1,9};
    cout<<"First Element: "<<*(list1.begin())<<endl;
    cout<<"Last Element: "<<*(next(list1.end(), -1))<<endl;
    cout<<"Next to Last Element: "<<*(list1.end())<<endl;

    for (auto it=list1.begin(); it!=list1.end(); it++) cout<<*it<<" ";
    cout<<endl;
    for (auto it = list1.rbegin(); it!=list1.rend(); it++) cout<<*it<<" ";
    cout<<endl;
    return 0;
}