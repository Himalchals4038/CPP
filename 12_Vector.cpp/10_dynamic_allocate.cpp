#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(94);
    vec.push_back(56);
    cout<<vec.size()<<endl; //Size increases normally
    cout<<vec.capacity()<<endl; //Capacity doubles whenever size increases beyond capacity
    vec.push_back(20);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.push_back(61);
    vec.push_back(37);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}