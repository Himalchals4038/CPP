#include <bits/stdc++.h>
using namespace std;

int main(){
    //Declaring the vector
    cout<<"Declaring the vector: ";
    vector<int> vec1(2, 5);
    vec1.insert(vec1.begin(), 3, 8);
    vec1.insert(vec1.end(), 2, 10);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";
    cout<<"Size: "<<vec1.size()<<"\n";
    cout<<"Capacity: "<<vec1.capacity()<<"\n";
    cout<<"\n";

    cout<<"Push back 25, 22, 26, 23, 29: ";
    vec1.push_back(25);
    vec1.push_back(22);
    vec1.push_back(26);
    vec1.push_back(23);
    vec1.push_back(29);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";
    cout<<"Size: "<<vec1.size()<<"\n";
    cout<<"Capacity: "<<vec1.capacity()<<"\n";
    return 0;
}