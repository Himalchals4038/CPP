#include <bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(){
        cout<<"Enter Person";
    }
    Person(string name, int age){
        cout<<"Enter Person"<<endl;
        this->name = name;
        this->age = age;
    }
};
class BachelorStudent : public Person{
    public:
    int rollNo;
    string btpTopic;
    BachelorStudent (string name, int age, int rollNo, string btpTopic) : Person (name, age){
        cout<<"Enter Bachelor Student"<<endl;
        this->rollNo = rollNo;
        this->btpTopic = btpTopic;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
    }
    ~BachelorStudent(){
        cout<<"Initiating Bachelor Destructor...."<<endl;
    }
};
class MasterStudent : public Person{
    public:
    int rollNo;
    string mtpTopic;
    MasterStudent (string name, int age, int rollNo, string mtpTopic) : Person (name, age){
        cout<<"Enter Master Student"<<endl;
        this->rollNo = rollNo;
        this->mtpTopic = mtpTopic;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
    }
    ~MasterStudent(){
        cout<<"Initiating Master Destructor...."<<endl;
    }
};
int main(){
    BachelorStudent bs1("Vedant", 21, 542, "Image Processing");
    bs1.getInfo();
    MasterStudent ms1("Suman", 23, 71, "Hardware Modelling");
    ms1.getInfo();
    return 0;
}