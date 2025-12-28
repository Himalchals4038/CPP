#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq1 = {5,4,2,3,6,8,1,9};
    cout<<"First Element: "<<*(dq1.begin())<<endl;
    cout<<"Last Element: "<<*(next(dq1.end(), -1))<<endl;
    cout<<"Next to Last Element: "<<*(dq1.end())<<endl;

    for (auto it=dq1.begin(); it!=dq1.end(); it++) cout<<*it<<" ";
    cout<<endl;
    for (auto it = dq1.rbegin(); it!=dq1.rend(); it++) cout<<*it<<" ";
    cout<<endl;
    return 0;
}