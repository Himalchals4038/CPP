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
    void getDetails(){
        // cout<<this->name<<" "<<this->runs<<" "<<this->average<<endl;
        cout<<name<<" "<<runs<<" "<<average<<endl;
    }
    void greet(string name){ //Random functions can also be passed inside a class
        cout<<"Hello, "<<name<<" welcome!!"<<endl;
    }
    int matches(){
        return runs/average;
    }
};
int main()
{
    Cricketer c1("MS Dhoni",9500,55.2);
    Cricketer c2("Virat Kohli",10400,76.3);
    c1.getDetails();
    c2.getDetails();
    c1.greet("Nayan");
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;
    return 0;
}