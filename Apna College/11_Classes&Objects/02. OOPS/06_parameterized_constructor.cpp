#include <bits/stdc++.h>
using namespace std;
class Teacher{
private:
    string password;
    string email;
    string phone;
public:
    //Constructor Overloading
    Teacher (){

    }
    Teacher(string n, int s, string sub){//Parameterized
        name = n;
        salary = s;
        subject = sub;
        department = "Computer Science";
    }
    string name;
    string department;
    string subject;
    double salary;
    void changeDept(string newDept){
        department = newDept;
    }
    void setEmail(string newEmail){
        email = newEmail;
    }
    string getEmail(){
        return email;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    Teacher t1 ("Julie", 85000, "Digital Logic");
    t1.getInfo();
    return 0;
}