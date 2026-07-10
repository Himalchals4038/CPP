#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1;
    cout<<"Size: "<<vec1.size()<<endl;
    vec1.push_back(88); //inserts items at the end of the vector
    vec1.push_back(29);
    vec1.push_back(31);
    cout<<"Size: "<<vec1.size()<<endl;
    for (int i:vec1){
        cout<<i<<endl;
    }
    return 0;
}