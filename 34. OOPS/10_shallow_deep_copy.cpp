#include <bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    double* cgpaPtr;
    Student (string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
    Student (Student &obj){
        cout<<"Initiating Copy Constructor...."<<endl;
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
};
int main(){
    Student s1("Samar", 8.2);
    s1.getInfo();
    Student s2(s1);
    s2.getInfo();
    return 0;
}