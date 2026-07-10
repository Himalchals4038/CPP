#include<iostream>
using namespace std;
float factorial(int a){
    int b = 1;
    for (int i=1;i<=a;i++){
        b=b*i;
    }
    return b;
}
int perm(int n, int r){
    return (factorial(n)/factorial(n-r));
}
int comb(int n, int r){
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}
int main(){
    cout<<factorial(5)<<endl;
    cout<<perm(15,5)<<endl;
    cout<<comb(13,7)<<endl;
    return 0;
}