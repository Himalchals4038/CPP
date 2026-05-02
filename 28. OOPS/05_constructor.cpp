#include <bits/stdc++.h>
using namespace std;
class Teacher{
private:
    string password;
    string email;
    string phone;
public:
    //Constructor, runs when calling the class
    Teacher(){//Non-parameterized 
        // cout<<"Hi, I am a teacher."<<endl;
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
};
int main(){
    Teacher t1;
    t1.name = "Julie";
    t1.salary = 85000;
    t1.subject = "Digital Logic";
    cout<<t1.name<<endl;
    cout<<t1.salary<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.department<<endl;
    return 0;
}