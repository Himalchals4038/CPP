#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float average;
    // Cricketer(string n,int r){
    //     name = name;
    //     runs = runs;
    // } Returns garbage values due to confusion of variable allocation
    Cricketer(string name,int runs,float average){
        this->name = name;
        this->runs = runs;
        this->average = average;
    }
};
int main()
{
    Cricketer c1("MS Dhoni",9500,55.2);
    Cricketer c2("Virat Kohli",10400,76.3);
    
    cout<<c1.name<<" "<<c1.runs<<" "<<c1.average<<endl;
    cout<<c2.name<<" "<<c2.runs<<" "<<c2.average<<endl;
    return 0;
}