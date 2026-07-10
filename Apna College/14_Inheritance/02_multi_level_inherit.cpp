#include<iostream>
using namespace std;
class Vehicle{
public:
    int topSpeed;
    float mileage;
    string fuel;
private:
};
class FourWheeler:public Vehicle{
public:
    float bootSpace;
};
class Car:public FourWheeler{
public:
    float bonetLength;
};
class Auto:public FourWheeler{
public:
    int seats;
};
int main()
{
    Car c1;
    c1.topSpeed = 180;
    c1.mileage = 18;
    c1.bonetLength = 0.85;
    c1.fuel = "Petrol";
    c1.bootSpace = 15;

    Auto a1;
    a1.bootSpace = 5;
    a1.fuel = "CNG";
    a1.mileage = 35;
    a1.seats = 4;
    a1.topSpeed = 65;
    return 0;
}
