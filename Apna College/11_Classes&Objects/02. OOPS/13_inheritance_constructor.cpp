#include <bits/stdc++.h>
using namespace std;
//Parent Class
class Person{
public:
    string name;
    int age;
    Person (){
        cout<<"Parent Constructor"<<endl;
    }
};
//Child Class
class Student: public Person{
public:
    int rollNo;
    Student(string name, int age, int rollNo){
        cout<<"Child Constructor"<<endl;
        this->name = name;
        this->age = age;
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