#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollNo;
    
    Student(){}
    Student (string name,int rollNo,float marks){
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }
    void display(){
        cout<<name<<" "<<rollNo<<" "<<marks<<endl;
    }
private:
    float marks;
};
int main()
{
    Student s1;
    s1.name = "Manav";
    s1.rollNo = 58;
    //s1.marks = 93.6; //Shows error as marks can't be assigned outside the class separately
    s1.display();

    return 0;
}