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
class Student: public Person{
public:
    int rollNo;
    //shift attributes from parent to child class
    Student(string name, int age, int rollNo) : Person(name, age){
        this->rollNo = rollNo;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
    }
};
int main(){
    Student s1("Sajal",21,57);
    s1.getInfo();
    return 0;
}
