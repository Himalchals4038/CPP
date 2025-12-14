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
    vec1.pop_back(); //Removes one element from the end of the vector
    vec1.pop_back();
    cout<<"Size: "<<vec1.size()<<endl;
    for (int i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}