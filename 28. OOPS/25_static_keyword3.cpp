#include <bits/stdc++.h>
using namespace std;
class Increment2{
    public:
        static int x;
        void incX(){
            x++;
        }
};
int Increment2::x;
int main(){
    Increment2 i3;
    Increment2 i4;
    i3.x = 10;
    i4.x = 20;
    cout<<i3.x<<endl;
    cout<<i4.x<<endl;

    //First variable increment
    i3.incX();
    cout<<i3.x<<endl;
    cout<<i4.x<<endl;
    
    //Second variable increment
    i4.incX();
    cout<<i3.x<<endl;
    cout<<i4.x<<endl;
    //x variable is altered at each call
    return 0;
}