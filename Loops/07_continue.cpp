#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a=0;
    for (int i=0;i<=20;i++){
        if (i>2 && i<8) continue;
        cout<<i<<" ";
    }
    return 0;
}