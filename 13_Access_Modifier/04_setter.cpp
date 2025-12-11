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
    float getMarks(){
        return marks;
    }
    void setMarks(float m){ //Setter
        marks = m;
    }
private:
    float marks;
};
int main(){
    Student s1("Manav",58,93.6);
    
    s1.display();    
    s1.setMarks(73.08); //Private part of class can be altered with a setter
    s1.display();
    return 0;
}