#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<sizeof(a)<<endl;
    char b;
    cout<<sizeof(b)<<endl;
    bool d;
    cout<<sizeof(d)<<endl;
    long long e;
    cout<<sizeof(e)<<endl;

    int c[] = {9, 8, 7, 6, 5, 4};
    cout<<sizeof(c)<<endl;
    cout<<sizeof(c[0])<<endl;
    cout<<sizeof(c)/sizeof(c[0])<<endl;
    
    return 0;
}