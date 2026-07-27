#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr;

    //Address of array
    cout<<"Printing address of array: "<<endl;
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;
    cout<<ptr+0<<endl;
    cout<<&ptr[0]<<endl;
    cout<<endl;
    
    //Dereferencing of array
    cout<<"Printing value of 1st element: "<<endl;
    cout<<*arr<<endl;
    cout<<*ptr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*(ptr+0)<<endl;
    cout<<arr[0]<<endl;
    cout<<endl;
    
    //Accessing 2nd element address
    cout<<"Printing address of 2nd element: "<<endl;
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;
    cout<<ptr+1<<endl;
    cout<<&ptr[1]<<endl;
    cout<<endl;
    
    //Dereferencing 2nd element
    cout<<"Printing value of 2nd element: "<<endl;
    cout<<*arr+1<<endl;
    cout<<*ptr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<arr[1]<<endl;
    cout<<endl;
    return 0;
}