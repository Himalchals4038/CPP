#include <bits/stdc++.h>
using namespace std;
int pos_recur(int *arr, int a, int size, int n){
    if (a > size) return -1;
    int mid = a + (size - a) / 2;
    if (arr[mid] == n) return mid;
    else if (arr[mid] < n) return pos_recur(arr, mid + 1, size, n);
    else return pos_recur(arr, a, mid - 1, n);
}
int main()
{
    int arr[] = {18, 26, 35, 49, 72, 16, 82, 46, 55, 37, 96, 80};
    int count = sizeof(arr)/sizeof(arr[0]), n;
    cout<<"Enter no: ";
    cin>>n;
    sort(arr, arr + count);
    cout<<"Sorted array: ";
    for (int i = 0; i < count; i++) cout<<arr[i]<<" ";
    cout<<endl<<"Position: "<<pos_recur(arr,0,count-1,n)<<endl;
    return 0;
}