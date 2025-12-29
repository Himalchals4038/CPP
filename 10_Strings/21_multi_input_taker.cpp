#include <bits/stdc++.h>
using namespace std;

int main(){
    char str1[100], str2[100];
    cout<<"Enter Input: ";
    cin>>str1;
    cout<<str1<<endl;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    // Clears the entire input buffer, necessary to intake 2 inputs
    
    cout<<"Enter Input: ";
    cin>>str2;
    cout<<str2<<endl;
    return 0;
}