#include <bits/stdc++.h>
using namespace std;
//vec.begin() stores addresses of the first element in the array
//vec.end() stores addresses of the next to last element in the array, returns garbage value if called using de-reference operator
int main(){
    vector<int> vec = {5,4,2,3,6,8,1,9};
    cout<<"First Element: "<<*(vec.begin())<<endl;
    cout<<"Last Element: "<<*(vec.end()-1)<<endl;
    cout<<"Next to Last Element: "<<*(vec.end())<<endl;
    return 0;
}