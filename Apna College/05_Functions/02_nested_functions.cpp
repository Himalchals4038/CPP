#include<iostream>
#include<algorithm>
using namespace std;
void test(){
    cout<<"This is a test case"<<endl;
    return;
}
void first(){
    cout<<"Printing the first statement"<<endl;
    return;
}
void second(){
    first(); //Previously declared functions are callable in next ones
    cout<<"Returning the second statement"<<endl;
    return;
}
void third(){
    second();
    cout<<"This is the last statement"<<endl;
    return;
}
void final(){
    cout<<"Finalizing the process"<<endl;
    test();
    third(); //Multiple functions can be called at once
    return;
}
int main()
{
    final();
    return 0;
}