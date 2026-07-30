#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr;
    int *ptr_rev = arr+5;

    //Printing the whole array
    cout<<"Printing the whole array: "<<endl;
    for (int i=0; i<6; i++) cout<<arr[i]<<" ";
    cout<<endl;
    for (int i=0; i<6; i++) cout<<*(arr+i)<<" ";
    cout<<endl;
    for (int i=0; i<6; i++) cout<<*(ptr+i)<<" ";
    cout<<endl;
    for (int i=0; i<6; i++) cout<<ptr[i]<<" ";
    cout<<endl;
    for (int i=0; i<6; i++) cout<<i[arr]<<" ";
    cout<<endl;
    for (int i=0; i<6; i++) cout<<i[ptr]<<" ";
    cout<<endl;
    for (int i=0; i<6; i++) cout<<*ptr++<<" ";
    cout<<endl;
    cout<<endl;

    //Printing the whole array in reverse
    cout<<"Printing the whole array in reverse: "<<endl;
    int* temp1 = ptr_rev;
    for (int i=0; i<6; i++) cout<<*temp1--<<" ";
    cout<<endl;
    int* temp2 = ptr_rev;
    for (int i=5; i>=0; i--) cout<<arr[i]<<" ";
    cout<<endl;
    int* temp3 = ptr_rev;
    for (int i=0; i<6; i++) cout<<*(temp3-i)<<" ";
    cout<<endl;
    cout<<endl;

    //Printing addresses of each element
    cout<<"Printing addresses of each element: "<<endl;
    for (int i=0; i<6; i++) cout<<arr+i<<" ";
    cout<<endl;
    for (int i=0; i<6; i++) cout<<ptr+i<<" ";
    cout<<endl;
    for (int i=0; i<6; i++) cout<<&arr[i]<<" ";
    cout<<endl;
    for (int i=0; i<6; i++) cout<<&ptr[i]<<" ";
    cout<<endl;
    return 0;
}