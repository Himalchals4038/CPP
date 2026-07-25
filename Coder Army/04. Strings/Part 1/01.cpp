#include <bits/stdc++.h>
using namespace std;

int main(){
    char arr[] = "Hello World";
    int arr_len = strlen(arr);
    cout<<arr<<endl;
    copy(arr, arr + arr_len, ostream_iterator<char>(cout, " "));
    cout<<"\n";
    
    reverse(arr, arr + arr_len);
    cout<<arr<<endl;
    copy(arr, arr + arr_len, ostream_iterator<char>(cout, " "));
    cout<<"\n";
    return 0;
}