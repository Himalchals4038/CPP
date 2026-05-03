#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollNo;
    float cgpa;
};
void StudentDetails(Student st){
    cout<<"Student Name: "<<st.name<<endl;
    cout<<"Roll No: "<<st.rollNo<<endl;
    cout<<"CGPA: "<<st.cgpa<<endl;
}
int main()
{
    Student st1;
    st1.name = "Tanmay";
    st1.rollNo = 49;
    st1.cgpa = 8.47;

    Student st2;
    st2.name = "Gaurav";
    st2.rollNo = 27;
    st2.cgpa = 9.12;

    // cout<<st1.name<<" "<<st1.rollNo<<" "<<st1.cgpa<<endl;
    // cout<<st2.name<<" "<<st2.rollNo<<" "<<st2.cgpa<<endl;
    StudentDetails(st1);
    StudentDetails(st2);
    return 0;
}