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
class Accounts{
private:
    double balance;
    string password;
public:
    string accountId;
    string username;
};
int main(){
    Teacher t1;
    t1.name = "Julie";
    t1.department = "Biotech";
    t1.subject = "Inheritance";
    t1.salary = 85000;

    // t1.setEmail("julie@houston.edu");
    // cout<<t1.getEmail()<<endl;
    return 0;
}