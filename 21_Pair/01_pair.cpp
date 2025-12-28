#include <bits/stdc++.h>
using namespace std;
//Pairs can store 2 datas of different types, which can be accessed using first and second functions
int main(){
    pair<int, int> pr1 = {42, 36};
    cout<<pr1.first<<" "<<pr1.second<<endl;

    pair<int, char> pr2 = {25, 'w'};
    cout<<pr2.first<<" "<<pr2.second<<endl;

    pair<string, int> pr3 = {"admin", 33};
    cout<<pr3.first<<" "<<pr3.second<<endl;

    pair<float, string> pr4 = {95.827, "pseudo"};
    cout<<pr4.first<<" "<<pr4.second<<endl;
    return 0;
}