#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 47;
    int* ptr1 = &a;
    cout<<ptr1<<endl;
    ptr1+=2; //2 integers or 8 bytes eqv memory added to pointer
    cout<<ptr1<<endl;
    ptr1-=4; //4 integers or 24 bytes eqv memory added to pointer
    cout<<ptr1<<endl;
    return 0;
}