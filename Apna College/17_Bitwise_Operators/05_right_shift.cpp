#include<iostream>
using namespace std;
//Binary form digits of the given integer shifts to right by the denoted number
int main()
{
    cout<<(10>>2)<<endl;
    cout<<(68>>2)<<endl;
    cout<<(108>>1)<<endl;
    return 0;
}
// a>>b is equivalent to a*(2^-b)
