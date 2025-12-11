#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float average;
    Cricketer(string name,int runs,float average){
        this->name = name;
        this->runs = runs;
        this->average = average;
    }
};
int main()
{
    Cricketer c1("MS Dhoni",9500,55.2);
    // Cricketer c2("Virat Kohli",10400,76.3);
    
    //dynamically allocated variable with no name of its own
    int* ptr = new int(4);
    cout<<*ptr<<endl;

    //dynamically allocated class
    Cricketer* c2 = new Cricketer("Virat Kohli",10400,76.3);
    // cout<<c2.name<<" "<<c2.runs<<" "<<c2.average<<endl;
    //c2 is not a variable name but an address, so it can't be called directly
    
    cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).average<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->average<<endl;
    return 0;
}