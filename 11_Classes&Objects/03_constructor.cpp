#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
    int seats;
    string type;
    
    Car(){} //Default constructor

    // Car(int p,string n,int s,string t){ Order can be altered but to be maintained while feeding data in main
    Car(string n,int p,int s){ //Parameterized Constructor
        name = n;
        price = p;
        seats = s;
    }
};
void CarDetails(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
int main(){
    Car c1("Maruti Swift",700000,5);
    c1.type = "Hatchback";
    // Car c2("Honda City",1500000,5,"Sedan");
    
    Car c2;
    c2.name = "Honda City";
    c2.price = 1500000;
    c2.seats = 5;
    c2.type = "Sedan";
    
    CarDetails(c1);
    CarDetails(c2);

    return 0;
}