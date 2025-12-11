#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollNo;    
    
    Student(){} //Default constructor
    Student (string name,int rollNo,float marks){
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }
    void display(){
        cout<<name<<" "<<rollNo<<" "<<marks<<endl;
    }
    float getMarks(){ //getter
        return marks;
    }
private:
    float marks;
};
int main(){
    Student s1("Manav",58,93.6);
    // s1("Dhiren",12,89.8); Constructor can't be called multiple times
    
    s1.display();
    // cout<<s1.marks<<endl; Shows inaccessible as it is foreign access outside class
    cout<<s1.getMarks()<<endl; //Can be accessed as function is defined inside class

    Student s2;
    s2.name = "Harish";
    s2.rollNo = 22;
    // s2.marks = 88.2; Can be assigned as private part of class can't be accessed outside class

    return 0;
}