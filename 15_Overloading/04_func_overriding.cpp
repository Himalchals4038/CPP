#include<iostream>
#include<vector>
using namespace std;
class Scooty{
public:
    int topSpeed;
    float mileage;
    // void sound(){
    //     cout<<"Vroom Vroom"<<endl;
    // } 
    virtual void sound(){ //allows variables to access child class functions by overloading parent functions
        cout<<"Vroom Vroom"<<endl;
    }
private:
    int bootSpace;
};
class Bike:public Scooty{
public:
    int gears;
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    } 
};
int main()
{
    // Scooty s1;
    Scooty* s1 = new Scooty();
    (*s1).sound();
    
    // Bike b1;
    Bike* b1 = new Bike(); //Object Pointer
    b1->sound();
    b1->topSpeed = 120;
    b1->gears = 4;
    b1->mileage = 80;
    cout<<b1->topSpeed<<endl;
    cout<<b1->gears<<endl;
    cout<<b1->mileage<<endl;
    
    Scooty* b2 = new Bike(); //Dynamic Polymorphism
    // b2->gears = 5; b2 has properties of Scooty but can't access Bike class
    b2->mileage = 65;
    b2->topSpeed = 70;
    b2->sound();
    
    vector<Scooty*> v;
    return 0;
}