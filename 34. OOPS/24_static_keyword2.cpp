#include <bits/stdc++.h>
using namespace std;
class Increment1{
public:
    int x;
    void incX(){
        x++;
    }
};
int main(){
    Increment1 i1;
    Increment1 i2;
    //Base conditions
    i1.x = 10;
    i2.x = 20;
    cout<<i1.x<<endl;
    cout<<i2.x<<endl;

    //First variable increment
    i1.incX();
    cout<<i1.x<<endl;
    cout<<i2.x<<endl;
    
    //Second variable increment
    i2.incX();
    cout<<i1.x<<endl;
    cout<<i2.x<<endl;
    //x variable for both classes are different
    return 0;
}