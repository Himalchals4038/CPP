#include <bits/stdc++.h>
using namespace std;
int pow(int a, int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int even(int n){
    if(n==0) return 0;
    if(n%2==0) return n+even(n-1);
    return even(n-1);
}
int squareSum(int n){
    if (n==0) return 0;
    return n*n + squareSum(n-1);
}
int main(){
    // Example for pow function
    cout<<"2^3 = "<<pow(2, 3)<<endl; // Expected: 8
    cout<<"5^0 = "<<pow(5, 0)<<endl; // Expected: 1
    cout<<"3^4 = "<<pow(3, 4)<<endl; // Expected: 81
    cout<<endl;

    // Example for sum function
    cout<<"Sum of numbers up to 5 = "<<sum(5)<<endl; // Expected: 15 (1+2+3+4+5)
    cout<<"Sum of numbers up to 0 = "<<sum(0)<<endl; // Expected: 0
    cout<<endl;

    // Example for even function (sum of even numbers up to n)
    cout<<"Sum of even numbers up to 6 = "<<even(6)<<endl; // Expected: 12 (2+4+6)
    cout<<"Sum of even numbers up to 5 = "<<even(5)<<endl; // Expected: 6 (2+4)
    cout<<"Sum of even numbers up to 0 = "<<even(0)<<endl; // Expected: 0
    cout<<endl;

    // Example for squareSum function
    cout<<"Square sum of numbers up to 4 = "<<squareSum(4)<<endl; // Expected: 30 (1^2+2^2+3^2+4^2)
    cout<<"Square sum of numbers up to 0 = "<<squareSum(0)<<endl; // Expected: 0
    cout<<endl;
    return 0;
}