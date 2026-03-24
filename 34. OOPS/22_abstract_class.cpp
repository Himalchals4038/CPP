#include <bits/stdc++.h>
using namespace std;
class Shape{//abstract class
    virtual void draw() = 0; //pure virtual function
};
class Circle : public Shape{
    public:
        void draw(){
            cout<<"Circle"<<endl;
        }
};
class Rectangle : public Shape{
    public:
        void draw(){
            cout<<"Rectangle"<<endl;
        }
};
class Triangle : public Shape{
    public:
        void draw(){
            cout<<"Triangle"<<endl;
        }
};
int main(){
    Circle c1;
    c1.draw();
    Rectangle r1;
    r1.draw();
    Triangle t1;
    t1.draw();
    return 0;
}