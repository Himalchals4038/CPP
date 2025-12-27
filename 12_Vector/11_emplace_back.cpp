#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1;
    cout<<"Size: "<<vec1.size()<<endl;
    
    vec1.emplace_back(88);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    cout<<"Size: "<<vec1.size()<<endl;
    cout<<"Capacity: "<<vec1.capacity()<<endl;
    
    vec1.emplace_back(29);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    cout<<"Size: "<<vec1.size()<<endl;
    cout<<"Capacity: "<<vec1.capacity()<<endl;
    
    vec1.emplace_back(31);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    cout<<"Size: "<<vec1.size()<<endl;
    cout<<"Capacity: "<<vec1.capacity()<<endl;
    
    return 0;
}
//Emplace back is preferred for adding elements directly to vector instead of creating a temporary object first and then copy from it and deleting the temporary object