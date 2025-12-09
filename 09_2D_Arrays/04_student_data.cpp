#include<iostream>
using namespace std;

int main()
{
    int st[2][4];
    char a;
    while (true){
        cout<<"Enter first letter of student name: ";
        cin>>a;
        if (a=='R'){
            cout<<"Student Name: Rajendra"<<endl;
            cout<<"Enter roll no: ";
            cin>>st[0][0];
            cout<<"Enter marks: ";
            cin>>st[1][0];
            continue;
        }
        if (a=='S'){
            cout<<"Student Name: Sohan"<<endl;
            cout<<"Enter roll no: ";
            cin>>st[0][1];
            cout<<"Enter marks: ";
            cin>>st[1][1];
            continue;
        }
        if (a=='T'){
            cout<<"Student Name: Tanmay"<<endl;
            cout<<"Enter roll no: ";
            cin>>st[0][2];
            cout<<"Enter marks: ";
            cin>>st[1][2];
            continue;
        }
        if (a=='H'){
            cout<<"Student Name: Hitesh"<<endl;
            cout<<"Enter roll no: ";
            cin>>st[0][3];
            cout<<"Enter marks: ";
            cin>>st[1][3];
            continue;
        }
        else break;
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<4;j++){
            cout<<st[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}