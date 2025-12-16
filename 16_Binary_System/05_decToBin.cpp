#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decToBin(int a){
    if (a == 0) return "0";
    if (a > 0) {
        unsigned int u = static_cast<unsigned int>(a);
        string s;
        while (u) { s.push_back(char('0' + (u & 1))); u >>= 1; }
        reverse(s.begin(), s.end());
        return s;
    }

    int width = sizeof(int) * 8;
    int w = 1;
    for (; w <= width; ++w) {
        int min = -(1 << (w - 1));
        if (a >= min) break;
    }
    if (w > width) w = width;
    unsigned int mask = (w == width) ? ~0u : ((1u << w) - 1u);
    unsigned int u = static_cast<unsigned int>(a) & mask;
    string out; out.reserve(w);
    for (int i = w - 1; i >= 0; --i) out.push_back(((u >> i) & 1u) ? '1' : '0');
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