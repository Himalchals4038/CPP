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
void change(Cricketer* c){
    // (*c).average = 68.7;
    c->average = 68.7;
    //Both terms are equivalent
}
int main()
{
    Cricketer c1("MS Dhoni",9500,55.2);
    Cricketer c2("Virat Kohli",10400,76.3);
    
    Cricketer* p1 = &c1;
    cout<<c1.runs<<endl;
    cout<<(*p1).runs<<endl;
    
    // (*p1).average = 68.7;
    change(&c1);
    cout<<c1.average<<endl;
    // cout<<(*p1).average<<endl;
    cout<<p1->average<<endl;
    
    return 0;
}