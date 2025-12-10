#include<iostream>
using namespace std;

int main()
{
    // char name[5] = {'a','d','m','i','n'};
    // for (int i=0;i<5;i++){
    //     cout<<name[i];
    // }
    string name;
    cout<<"Enter name: ";
    // cin>>name; //Only intakes first word of the string
    getline(cin,name); //Intakes the whole input sentence
    cout<<name;
    return 0;
}