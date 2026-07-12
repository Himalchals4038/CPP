#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1(2, 5);
    vec1.insert(vec1.begin(), 3, 8);
    vec1.insert(vec1.end(), 2, 10);

    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";
    cout<<"Insert 19 at index 5: ";
    vec1.insert(vec1.begin()+5, 19);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";

    cout<<"First Element: "<<vec1.front()<<"\n";
    cout<<"Last Element: "<<vec1.back()<<"\n";
    return 0;
}