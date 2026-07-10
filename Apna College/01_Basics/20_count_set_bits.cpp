#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1 = 16;
    long int n2 = 127;
    long long int n3 = 31625;

    //Returns the no. of units in binary form of n that has 1
    cout<<__builtin_popcount(n1)<<endl; //For integer
    cout<<__builtin_popcountl(n2)<<endl; //For long integer
    cout<<__builtin_popcountll(n3)<<endl; //For long long integer
    return 0;
}