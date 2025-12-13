#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decToBin(int a){
    if (a==0) return "0";
    bool neg = (a<0);
    long long tmp = a;
    if (neg) tmp = -tmp;

    string s;
    while (tmp>0){
        s.push_back((tmp%2)?'1':'0');
        tmp/=2;
    }
    reverse(s.begin(),s.end());
    if (!neg) return s;

    int width = sizeof(int)*8;
    int w=1;
    for (;w<=width;++w){
        int min = -(1<<(w-1));
        if (a>=min) break;
    }
    if (w>width) w=width;
    int mask=(w==64)?~0:((1<<w)-1);
    int u=(static_cast<int>(a))&mask;

    string out;
    out.reserve(w);
    for (int i=(int)w-1;i>=0;--i){
        out.push_back(((u>>i)&1)?'1':'0');
    }
    return out;
}

int main()
{
    int a;
    cout<<"Enter decimal no: ";
    if(!(cin>>a))return 0;
    cout<<"Binary form of no: "<<decToBin(a)<<endl;
    return 0;
}