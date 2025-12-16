#include<bits/stdc++.h>
using namespace std;
string decToBin1(int a){
    return bitset<64>(a).to_string();
}
string decToBin2(int a){
    if (a==0) return "0";
    string binStr="";
    while (a>0){
        binStr+=to_string(a%2);
        a/=2;
    }
    reverse(binStr.begin(), binStr.end());
    return binStr;
}
int main()
{
    int a;
    cout<<"Enter decimal no: ";
    cin>>a;
    cout<<"Binary form of no: "<<decToBin1(a)<<endl;
    cout<<"Binary form of no: "<<decToBin2(a)<<endl;
    return 0;
}
//Negative integers when converted to binary have an extra zero added in front of them which is called the most significant bit(MSB)