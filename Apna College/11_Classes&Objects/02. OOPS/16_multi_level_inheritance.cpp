#include <bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};
class Student : public Person{
    public:
    int rollNo;
    Student (string name, int age, int rollNo) : Person (name, age){
        this->rollNo = rollNo;
    }
};
class GradStudent : public Student{
    public:
    string researchArea;
    GradStudent (string name, int age, int rollNo, string researchArea) : Student (name, age, rollNo){
        this->researchArea = researchArea;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Research Area: "<<researchArea<<endl;
    }
};
int main(){
    GradStudent gs1("Vedant", 25, 542, "Artificial Intelligence");
    gs1.getInfo();
    return 0;
}