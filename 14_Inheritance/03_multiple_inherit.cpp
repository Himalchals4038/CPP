#include<iostream>
#include<string>
using namespace std;
class Employee{
public:
    string company;
    string domain;
    int salary;
    float experience;
};
class Son{
public:
    string fatherName;
    string motherName;
    string address;
};
class Husband{
public:
    string wifeName;
    int years;
    int wifeSalary;
};
class Father:public Husband{
public:
    int num;
    int schoolFees;
    int collegeFees;
};
class FamilyMan:public Employee, public Son, public Father{
public:
    string name;
    float savings;
    string dream;
};
int main()
{
    FamilyMan f1;
    f1.name = "Satish Ranjan";
    f1.company = "Asus";
    f1.domain = "Product Manager";
    f1.salary = 150000;
    f1.experience = 11;
    f1.fatherName = "Rajendra Ranjan";
    f1.motherName = "Anita Ranjan";
    f1.address = "Uttar Pradesh";
    f1.wifeName = "Priya Sharma";
    f1.years = 5;
    f1.wifeSalary = 120000;
    f1.num = 2;
    f1.schoolFees = 50000;
    f1.collegeFees = 200000;
    f1.savings = 2500000;
    f1.dream = "Build a house";
    
    // cout << "Name: " << f1.name << endl;
    // cout << "Company: " << f1.company << endl;
    // cout << "Domain: " << f1.domain << endl;
    // cout << "Salary: " << f1.salary << endl;
    // cout << "Experience: " << f1.experience << " years" << endl;
    
    // cout << "Father Name: " << f1.fatherName << endl;
    // cout << "Mother Name: " << f1.motherName << endl;
    // cout << "Address: " << f1.address << endl;
    
    // cout << "Wife Name: " << f1.wifeName << endl;
    // cout << "Years Married: " << f1.years << endl;
    // cout << "Wife Salary: " << f1.wifeSalary << endl;
    
    // cout << "Number of Children: " << f1.num << endl;
    // cout << "School Fees: " << f1.schoolFees << endl;
    // cout << "College Fees: " << f1.collegeFees << endl;
    
    // cout << "Savings: " << f1.savings << endl;
    // cout << "Dream: " << f1.dream << endl;
    
    return 0;
}