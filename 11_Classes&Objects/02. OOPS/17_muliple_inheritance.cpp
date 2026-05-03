#include <bits/stdc++.h>
using namespace std;
class Teacher{
public:
    string name;
    int age;
    string subject;
    Teacher (string name, int age, string subject){
        this->name = name;
        this->age = age;
        this->subject = subject;
    }
};
class Student{
public:
    int rollNo;
    int marks;
    Student (int rollNo, int marks){
        this->rollNo = rollNo;
        this->marks = marks;
    }
};
class TA : public Student, public Teacher{
public:
    TA (string name, int age, string subject, int rollNo, int marks) : Teacher(name, age, subject), Student(rollNo, marks){
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    TA ta1("Vedant", 25, "C++", 52, 90);
    ta1.getInfo();
    return 0;
}