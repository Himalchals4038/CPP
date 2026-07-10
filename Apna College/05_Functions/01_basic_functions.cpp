#include<iostream>
#include<algorithm>
using namespace std;
void inital(){
    cout<<"Initializing the sequence"<<endl;
    cout<<"Start executing the program"<<endl;
}
void loop(){
    cout<<"Running the loop";
    return;
    //Return closes the function and prevents execution of any code after it.
    cout<<"Re-running the loop";
}
int main()
{
    inital();
    cout<<"Hey There"<<endl;
    //Functions can be returned multiple times
    inital();
    loop();
    //Only main function requires a mandatory return, for others, its optional
    return 0;
}
