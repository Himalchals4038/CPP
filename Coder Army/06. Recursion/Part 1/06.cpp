#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> &arr, int index){
    if (index == arr.size()) return;
    cout<<arr[index]<<" ";
    printVector(arr, index+1);
}
void printVectorReverse(vector<int> &arr, int index){
    if (index == arr.size()) return;
    printVectorReverse(arr, index+1);
    cout<<arr[index]<<" ";
}
void printArray(int arr[], int index, int size){
    if (index == size) return;
    cout<<arr[index]<<" ";
    printArray(arr, index+1, size);
}
int main(){
    vector<int> vec1 = {12, 28, 36, 44, 35};
    printVector(vec1, 0);
    cout<<endl;
    printVectorReverse(vec1, 0);
    cout<<endl;

    int arr1[] = {11, 21, 31, 14, 15};
    printArray(arr1, 0, 5);
    cout<<endl;
    return 0;
}