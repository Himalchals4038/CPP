#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1(2, 5);
    vec1.insert(vec1.begin(), 3, 8);
    vec1.insert(vec1.end(), 2, 10);

    cout<<"Max element: "<<*max_element(vec1.begin(), vec1.end())<<"\n";
    cout<<"Min element: "<<*min_element(vec1.begin(), vec1.end())<<"\n";
    cout<<"Sum of all elements: "<<accumulate(vec1.begin(), vec1.end(), 0)<<"\n";
    cout<<"Average of all elements: "<<accumulate(vec1.begin(), vec1.end(), 0.0) / vec1.size()<<"\n";
    cout<<"Count of 8: "<<count(vec1.begin(), vec1.end(), 8)<<"\n";
    return 0;
}