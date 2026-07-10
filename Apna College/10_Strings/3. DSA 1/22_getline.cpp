#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cout<<"Enter Input: ";
    cin>>str;
    cout<<str<<endl;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    //Reads entire input until specified number of characters
    cout<<"Enter Input: ";
    cin.getline(str, 50);
    cout<<str<<endl;
    return 0;
}