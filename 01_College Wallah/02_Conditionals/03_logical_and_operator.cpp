#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int l, b;
    cout<<"Enter length of rectangle: ";
    cin>>l;
    cout<<"Enter breadth of rectangle: ";
    cin>>b;
    int area = l*b;
    cout<<"Area of the rectangle is: "<<area<<endl;
    int peri = 2*(l+b);
    cout<<"Perimeter of the rectangle is: "<<peri<<endl;
    if (area>peri){
        cout<<"Area is greater than perimeter";
    }
    else if ((peri>area)){
        cout<<"Area is smaller than perimeter";
    }
    else{
        cout<<"Area is equal to perimeter";
    }
    return 0;
}