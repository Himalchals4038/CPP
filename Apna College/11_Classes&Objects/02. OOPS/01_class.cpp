#include <bits/stdc++.h>
using namespace std;
class Teacher{
public:
    string name;
    string department;
    string subject;
    double salary;
    void changeDept(string newDept){
        department = newDept;
    }
    void changeSalary(double newSalary){
        salary = newSalary;
    }
};

class Student{
public:
    string name;
    int rollNo;
    double cgpa;
    void updateCgpa(double newCgpa) {
        cgpa = newCgpa;
    }
    void updateRollNo(int newRollNo) {
        rollNo = newRollNo;
    }
};

int main(){
    Teacher t1;
    t1.name = "Julie";
    t1.department = "Biotech";
    t1.subject = "Inheritance";
    t1.salary = 85000;

    cout<<t1.department<<endl;
    cout<<t1.salary<<endl;

    Student s1;
    s1.name = "Mayank";
    s1.rollNo = 48;
    s1.cgpa = 9.2;

    cout<<s1.cgpa<<endl;
    cout<<s1.rollNo<<endl;
    return 0;
}