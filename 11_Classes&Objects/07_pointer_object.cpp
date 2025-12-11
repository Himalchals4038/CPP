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
    Cricketer c2("Virat Kohli",10400,76.3);
    return 0;
}