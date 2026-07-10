#include<iostream>
using namespace std;
//Integers are converted to binary digits, xor operation done on individual digits
int main()
{
    cout<<(7 ^ 5)<<endl;
    cout<<(4 ^ 8)<<endl;
    return 0;
}
//a ^ a = 0
//a ^ 0 = a
// a^b^a = a^a^b = 0^b = b