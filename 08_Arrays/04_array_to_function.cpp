#include<iostream>
using namespace std;
void change1(int x){
    x = 15;
} //pass by value
void change2(int arr[]){
    arr[3] = 15;
} //pass by reference
int main()
{
    int x=3;
    cout<<x<<endl;
    change1(x);
    cout<<x<<endl; //pass by value

    int arr[] = {52, 49, 16, 33, 58, 70, 94};
    change2(arr); //changes the value inside array
    for (int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}