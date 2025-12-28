#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1;
    q1.push(98);
    q1.push(74);
    q1.push(65);
    q1.push(21);
    q1.push(17);
    q1.push(58);
    q1.push(37);
    cout<<"First Element: "<<q1.front()<<endl;
    cout<<"Last Element: "<<q1.back()<<endl;
    cout<<"Size of Queue: "<<q1.size()<<endl;
    
    //Removes first element from the queue
    q1.pop();
    cout<<"First Element: "<<q1.front()<<endl;
    cout<<"Size of Queue: "<<q1.size()<<endl;


    return 0;
}