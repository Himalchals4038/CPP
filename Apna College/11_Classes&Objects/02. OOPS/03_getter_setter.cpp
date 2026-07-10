#include <bits/stdc++.h>
using namespace std;
class Teacher{
private:
    string password;
    string email;
    string phone;

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

    //setter
    void setEmail(string newEmail){
        email = newEmail;
    }
    //getter
    string getEmail(){
        return email;
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

private:
    string password;
    string email;
    string phone;
};

int main(){
    Teacher t1;
    t1.name = "Julie";
    t1.department = "Biotech";
    t1.subject = "Inheritance";
    t1.salary = 85000;

    // cout<<t1.department<<endl;
    // cout<<t1.salary<<endl;

    // t1.changeDept("Computer Science");
    // t1.changeSalary(90000);
    // cout<<t1.department<<endl;
    // cout<<t1.salary<<endl;

    t1.setEmail("julie@houston.edu");
    cout<<t1.getEmail()<<endl;

    // Student s1;
    // s1.name = "Mayank";
    // s1.rollNo = 48;
    // s1.cgpa = 9.2;

    // cout<<s1.cgpa<<endl;
    // cout<<s1.rollNo<<endl;

    // s1.updateCgpa(8.9);
    // s1.updateRollNo(49);
    // cout<<s1.cgpa<<endl;
    // cout<<s1.rollNo<<endl;
    return 0;
}