#include <bits/stdc++.h>
using namespace std;
void increment1(){
    int s = 0;
    cout<<"s : "<<s<<endl;
    s++;
}
//Static creates separate space for storing variable
void increment2(){
    static int t = 0;
    cout<<"t : "<<t<<endl;
    t++;
}
int main(){
    //Value of s doesn't change at each call
    increment1();
    increment1();
    increment1();
    //Value of t changes at each call
    increment2();
    increment2();
    increment2();
    return 0;
}