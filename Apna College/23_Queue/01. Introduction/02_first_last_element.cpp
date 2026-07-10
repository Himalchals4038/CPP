#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1;
    q1.push(98);
    q1.push(74);
    q1.push(65);

    cout<<"First Element: "<<q1.front()<<endl;
    cout<<"Last Element: "<<q1.back()<<endl;
    return 0;
}