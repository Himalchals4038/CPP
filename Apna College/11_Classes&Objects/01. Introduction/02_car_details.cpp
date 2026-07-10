#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
    int seats;
    string type;
};
void CarDetails(Car c){
    cout<<"Model Name: "<<c.name<<endl;
    cout<<"Market Price: "<<c.price<<endl;
    cout<<"No. of seats: "<<c.seats<<endl;
    cout<<"Car Type: "<<c.type<<endl;
}
void ChangeName(Car c){
    c.name = "Audi A8";
}
int main(){
    Car c1;
    c1.name = "Maruti Swift";
    c1.price = 700000;
    c1.seats = 5;
    c1.type = "Hatchback";

    Car c2;
    c2.name = "Honda City";
    c2.price = 1500000;
    c2.seats = 5;
    c2.type = "Sedan";

    CarDetails(c1);
    CarDetails(c2);
    ChangeName(c2); //Pass by value
    CarDetails(c2);
    return 0;
}