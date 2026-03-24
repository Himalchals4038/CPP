#include <bits/stdc++.h>
using namespace std;
class Sample{
public:
    Sample(){
        cout<<"Constructor is called"<<endl;
    }
    ~Sample(){
        cout<<"Destructor is called"<<endl;
    }
};
int main(){
    if (true){
        Sample s1;
    }
    cout<<"End of the code";
    return 0;
}