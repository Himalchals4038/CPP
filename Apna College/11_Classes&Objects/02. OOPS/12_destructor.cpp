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
    //destructor
    ~Student(){
        cout<<"Initiating Destructor...."<<endl;
        //pointer values need to be deleted individually
        delete cgpaPtr; 
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
};
int main(){
    Student s1("Samar", 8.2);
    s1.getInfo();
    return 0;
}