#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1 = {70,64,38};
    cout<<"Size: "<<vec1.size()<<endl;
    
    vec1.push_back(88); 
    vec1.push_back(29);
    vec1.push_back(31);
    
    cout<<"Size: "<<vec1.size()<<endl;
    for (int i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<vec1.at(3)<<endl; //Alternate way to obtain data stored at a particular index inside the vector
    return 0;
}