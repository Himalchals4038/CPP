#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x = 15;
    cout<<&x<<endl; //Prints address of the variable

    int* ptr = NULL;
    int** ptr1 = NULL; //No address stored here
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    return 0;
}