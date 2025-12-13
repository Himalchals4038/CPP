#include<iostream>
using namespace std;
string decToBin(int a){
    int b=0,c=a,d=0;
    if (a<0) a=-a;
    while(a>0){
        b*=10;
        b+=(a%2);
        a/=2;
    }
    if (c<0) return "0" + to_string(b);
    return to_string(b);
};
int main()
{
    int a;
    cout<<"Enter decimal no: ";
    cin>>a;
    cout<<"Binary form of no: "<<decToBin(a);
    return 0;
}
//Negative integers when converted to binary have an extra zero added in front of them which is called the most significant bit(MSB)