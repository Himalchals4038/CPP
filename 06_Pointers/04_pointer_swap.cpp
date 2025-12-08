#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x=28,y=61;
    swap(&x, &y);
    cout<<x<<" "<<y;
    return 0;
}