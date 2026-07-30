#include <bits/stdc++.h>
using namespace std;

int main(){
    char arr[6] = "abcde";
    char *ptr = arr;

    cout<<"Printing the array: "<<endl;
    cout<<ptr<<endl;
    cout<<ptr+0<<endl;
    cout<<&ptr[0]<<endl;
    cout<<endl;
    
    cout<<"Dereferencing the array: "<<endl;
    cout<<*ptr<<endl;
    cout<<*(ptr+0)<<endl;
    cout<<arr[0]<<endl;
    cout<<arr<<endl;
    cout<<endl;
    
    cout<<"Printing from 2nd element: "<<endl;
    cout<<arr[1]<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<ptr+1<<endl;
    cout<<&ptr[1]<<endl;
    cout<<arr+1<<endl;
    cout<<endl;
    
    cout<<"Printing the address of array: "<<endl;
    cout<<&ptr<<endl;
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;
    cout<<(void*)(arr+1)<<endl;
    cout<<(void*)(ptr+1)<<endl;
    cout<<endl;
    return 0;
}