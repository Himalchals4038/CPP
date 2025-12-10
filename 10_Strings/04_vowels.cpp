#include<iostream>
using namespace std;

int main()
{
    // string intro = "Resident of Durgapur for past ten years";
    string intro;
    cout<<"Enter sentence: ";
    getline(cin,intro);
    int n=0;
    for (int i=0;i<intro.length();i++){
        if (intro[i]=='a'||intro[i]=='e'||intro[i]=='i'||intro[i]=='o'||intro[i]=='u'){
            n+=1;
        }
    }
    cout<<"No. of vowels in sentence: "<<n;
    return 0;
}