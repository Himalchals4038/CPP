#include<iostream>
using namespace std;
class Scooty{ //parent class
public:
    int topSpeed;
    float mileage;
private:
    int bootSpace;
};
    //Single Inheritance
class Bike:public Scooty{ //child class
public:
    int gears;
};
// class Bike{
//     int topSpeed;
//     float mileage;
//     int gears;
// };
int main()
{
    Bike b1;
    b1.topSpeed = 180;
    b1.mileage = 80;
    b1.gears = 4;
    // b1.bootSpace = 12; Private members of Scooty class not passed to Bike under Inheritance
    return 0;
}