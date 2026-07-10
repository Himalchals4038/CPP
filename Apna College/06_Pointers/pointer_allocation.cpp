#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 47;
    int* ptr1 = &a; //stores memory the size of one integer -> 4 bytes
    cout<<ptr1<<" "<<++ptr1<<" "<<--ptr1<<endl;
    
    double b = 63.25;
    double* ptr2 = &b;
    cout<<ptr2<<" "<<++ptr2<<" "<<--ptr2<<endl;

    long long c = 47;
    long long* ptr3 = &c;
    cout<<ptr3<<" "<<++ptr3<<" "<<--ptr3<<endl;
    
    long double d = 98.72;
    long double* ptr4 = &d;
    cout<<ptr4<<" "<<++ptr4<<" "<<--ptr4<<endl;
    
    return 0;
}