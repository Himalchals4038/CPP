#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
    int seats;
    string type;
    Car(){}
    Car(string n,int p,int s){
        name = n;
        price = p;
        seats = s;
    }
    Car(string n,int p,int s, string t){
        name = n;
        price = p;
        seats = s;
        type = t;
    }
};
void CarDetails(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
int main(){
    Car c1("Maruti Swift",700000,5);
    c1.type = "Hatchback";
    
    Car c2;
    c2.name = "Honda City";
    c2.price = 1500000;
    c2.seats = 5;
    c2.type = "Sedan";

    Car c3("Mahindra Sumo",2500000,8,"SUV");
    
    CarDetails(c1);
    CarDetails(c2);
    CarDetails(c3);
    
    Car c4 = c1; //Classes can be copied
    CarDetails(c4);
    c4.name = "Bolero"; //Deep copy
    CarDetails(c4);
    
    Car c5(c3); //Copy constructor
    CarDetails(c5);
    c5.price = 3500000; //Deep copy
    CarDetails(c5);

    return 0;
}