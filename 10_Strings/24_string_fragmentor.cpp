#include <bits/stdc++.h>
using namespace std;

void printFormatted(char str[]) {
    int len=strlen(str);
    for (int i=0; i<len; i++) {
        cout<<"'"<<str[i]<<"'";
        if (i<len-1) cout<<",";
    }
    cout << endl;
}

int main(){
    char str[100];
    cout<<"Enter Input: ";
    cin.getline(str,100);
    printFormatted(str);
    return 0;
}