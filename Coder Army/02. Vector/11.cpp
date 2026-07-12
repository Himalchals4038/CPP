#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1(2, 5);
    vec1.insert(vec1.begin(), 3, 8);
    vec1.insert(vec1.end(), 2, 10);

    sort(vec1.begin(), vec1.end());
    cout<<"Median of all elements: "<<vec1[vec1.size()/2]<<"\n";
    cout<<"Found 8: "<<binary_search(vec1.begin(), vec1.end(), 8)<<"\n";

    cout<<"Lower bound of 8: "<<lower_bound(vec1.begin(), vec1.end(), 8) - vec1.begin()<<"\n";
    cout<<"Upper bound of 8: "<<upper_bound(vec1.begin(), vec1.end(), 8) - vec1.begin()<<"\n";
    return 0;
}