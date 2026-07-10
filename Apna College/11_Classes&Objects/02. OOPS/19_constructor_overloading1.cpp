#include <bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    Student(){
        cout<<"Non-Parameterized"<<endl;
    }
    Student(string name){
        cout<<"Parameterized"<<endl;
        this->name = name;
    }
    Student(Student &s){
        cout<<"Copy Constructor"<<endl;
        this->name = s.name;
    }
};
int main(){
    Student s1; //No parameter
    Student s2("Sourav"); //Parameter
    Student s3(s2); //Copy
    return 0;
}