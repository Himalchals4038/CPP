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
int main(){
    Student s1("Manav",58,93.6); //marks can be given as it is a constructor inside class    
    s1.display();
    return 0;
}