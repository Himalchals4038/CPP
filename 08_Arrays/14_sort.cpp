#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {5, 4, 8, 6, 3, 0};

    //Sort in ascending order
    sort(arr, arr+6);
    copy(arr, arr+6, ostream_iterator<int>(cout, " "));
    cout<<endl;
    
    //Sort in descending order
    sort(arr, arr+6, greater<int>());
    copy(arr, arr+6, ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}