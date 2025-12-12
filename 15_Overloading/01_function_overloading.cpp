#include<iostream>
using namespace std;
class Loading{
public:
    void sum(string a,string b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
    // int sum(int a,int b){
    //     return a+b;
    // }
};  
int main()
{
    Loading a;
    // cout<<a.sum2(15,75)<<endl;
    a.sum("Taj"," Mahal");
    a.sum(42,66);
    a.sum(42,66,29);
    return 0;
}